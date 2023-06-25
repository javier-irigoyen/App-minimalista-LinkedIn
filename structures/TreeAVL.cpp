#include <iostream>
#include <functional>
#include <cmath>
using namespace std;
//--------------------------------------------Genericos-------------------------
// Recuerde que las estructuras deben funcionar para cualquier tipo de dato(primitivo o compuesto)
template <class T>
class Nodo
{
public:
    T elemento;
    Nodo *izq;
    Nodo *der;
    int altura;

    Nodo()
    {
        izq = nullptr;
        der = nullptr;
        altura = 0;
    }
};

template <class T>
class ArbolAVL
{
private:
    Nodo<T> *raiz;
    int numNodos = 0;
    void (*procesar)(T); // puntero a función
    short (*criterio)(T, T);
    // Operaciones privadas
    int _altura(Nodo<T> *nodo)
    {
        if (nodo == nullptr)
            return -1;
        return nodo->altura;
    }

    void _rotarDerecha(Nodo<T> *&nodo)
    {
        Nodo<T> *p = nodo->izq;
        nodo->izq = p->der;
        p->der = nodo;
        actualizaAltura(nodo);
        nodo = p;
        actualizaAltura(nodo);
    }

    void _rotarIzquierda(Nodo<T> *&nodo)
    {
        Nodo<T> *p = nodo->der;
        nodo->der = p->izq;
        p->izq = nodo;
        actualizaAltura(nodo);
        nodo = p;
        actualizaAltura(nodo);
    }
    void actualizaAltura(Nodo<T> *nodo)
    {
        if (nodo != nullptr)
        {
            int hizq = _altura(nodo->izq);
            int hder = _altura(nodo->der);
            nodo->altura = 1 + ((hizq > hder) ? hizq : hder);
        }
    }
    void _balanceo(Nodo<T> *&nodo)
    {
        int hizq = _altura(nodo->izq);
        int hder = _altura(nodo->der);
        int fb = hder - hizq;

        if (fb > 1)
        { // rotar a la izq
            int hhizq = _altura(nodo->der->izq);
            int hhder = _altura(nodo->der->der);
            if (hhizq > hhder)
            { // verificar si aplica doble rotación
                _rotarDerecha(nodo->der);
            }
            _rotarIzquierda(nodo);
        }
        else if (fb < -1)
        { // rotar a la der
            int hhizq = _altura(nodo->izq->izq);
            int hhder = _altura(nodo->izq->der);
            if (hhizq < hhder)
            { // verificar si aplica doble rotación
                _rotarIzquierda(nodo->izq);
            }
            _rotarDerecha(nodo);
        }
        else
        {
            actualizaAltura(nodo);
        }
    }

    bool _insertar(Nodo<T> *&nodo, T e)
    {

        if (nodo == nullptr)
        {
            // Nuevo elemento
            nodo = new Nodo<T>();
            nodo->elemento = e;
            return true;
        }
        else if (criterio(e, nodo->elemento) == 0) // else if (e == nodo->elemento)
            _insertar(nodo->der, e);
        // return false;
        else if (criterio(e, nodo->elemento) < 0)
        { // else if (e < nodo->elemento) {
            _insertar(nodo->izq, e);
        }
        else if (criterio(e, nodo->elemento) > 0)
        { // else if (e > nodo->elemento) {
            _insertar(nodo->der, e);
        }
        _balanceo(nodo);
        return true;
    }

    void _inOrden(Nodo<T> *nodo)
    {
        if (nodo == nullptr)
            return;
        _inOrden(nodo->izq);
        procesar(nodo->elemento);
        _inOrden(nodo->der);
    }

    void _inOrdenH(Nodo<T> *nodo)
    {
        if (nodo == nullptr)
            return;
        _inOrdenH(nodo->izq);
        procesar(nodo->altura);
        _inOrdenH(nodo->der);
    }

public:
    ArbolAVL(void (*nuevaFuncion)(T), short (*criterio)(T, T))
    {
        this->procesar = nuevaFuncion;
        this->raiz = nullptr;
        this->criterio = criterio;
    }

    bool Insertar(T e)
    {
        return _insertar(raiz, e);
    }
    void inOrden()
    {
        _inOrden(raiz);
    }
    void inOrdenH()
    {
        _inOrdenH(raiz);
    }
    bool _esArbolLleno(Nodo<T> *nodo)
    {
        if (nodo == nullptr)
            return true;
        if (nodo->izq == nullptr && nodo->der == nullptr)
            return true;
        if (nodo->izq != nullptr && nodo->der != nullptr)
            return _esArbolLleno(nodo->izq) && _esArbolLleno(nodo->der);
        return false;
    }
    int obtenerAltura()
    {
        return _altura(raiz) - 1;
    }
    bool EsArbolPerfecto()
    {
        int numNodosCompleto = 0;
        int altura = obtenerAltura();
        if (altura == 0)
            return true;
        for (size_t i = altura; i > 0; --i)
        {
            numNodosCompleto = numNodosCompleto + pow(2, i);
        }
        if (numNodos == numNodosCompleto + 1)
            return true;
        else
            return false;
        // int altura = _altura(raiz);
        // return _verificarPotenciaDos(raiz, altura - 1);
    }
};
