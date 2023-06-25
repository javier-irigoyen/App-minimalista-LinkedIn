#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stdio.h>
#include <fstream>

using namespace std;

template <class T>
class Graph
{
private:
    int numVertices;
    vector<list<T>> matrizAdy;
    void (*procesar)(T); // puntero a función
    short (*criterio)(T, T);

public:
    Graph(void (*nuevaFuncion)(T), short (*criterio)(T, T))
    {
        this->numVertices = 0;
        this->procesar = nuevaFuncion;
        this->criterio = criterio;
    }

    void agregarNodo(T tipo)
    {
        if (matrizAdy.empty())
        {
            list<T> lista;
            lista.push_back(tipo);
            matrizAdy.push_back(lista);
            numVertices++;
        }
        else
        {
            bool existeNodo = false;
            for (size_t c = 0; c < matrizAdy.size(); ++c) // para cada fila
            {
                if (tipo == matrizAdy[c].front())
                {
                    existeNodo = true;
                    break;
                }
            }
            if (!existeNodo)
            {
                list<T> lista;
                lista.push_back(tipo);
                matrizAdy.push_back(lista);
                numVertices++;
            }
        }
    }

    void agregarArista(T origen, T destino) // no dirigido
    {
        agregarNodo(origen);
        agregarNodo(destino);
        for (size_t c = 0; c < matrizAdy.size(); ++c)
        {
            if (matrizAdy[c].front() == origen)
            {
                matrizAdy[c].push_back(destino);
            }
            if (matrizAdy[c].front() == destino)
            {
                matrizAdy[c].push_back(origen);
            }
        }
    }

    void imprimeConexionesDirectas(T tipo) // imprime los componentes cols de la fila seleccionada (obj)
    {
        cout << tipo << " = ";
        for (size_t c = 0; c < matrizAdy.size(); ++c)
        {
            if (matrizAdy[c].front() == tipo)
            {
                typename list<T>::iterator it;
                for (it = matrizAdy[c].begin(); it != matrizAdy[c].end(); ++it)
                {
                    if (it == prev(matrizAdy[c].end()))
                    {
                        cout << *it;
                    }
                    else
                    {
                        cout << *it << " - ";
                    }
                }
            }
        }
        cout << endl;
    }

    void muestraCaminoBFS(T origen, T destino) // busqueda
    {
        vector<bool> visitado(numVertices, false); // vector visitado de tamanio numVertices inicializando en false
        queue<T> cola;
        visitado[origen] = true;
        cola.push(origen);
        while (!cola.empty())
        {
            int actual = cola.front();
            cola.pop();
            cout << actual << " ";

            typename list<T>::iterator it;
            for (it = matrizAdy[actual].begin(); it != matrizAdy[actual].end(); ++it)
            {
                if (!visitado[*it])
                {
                    visitado[*it] = true;
                    cola.push(*it);
                }
            }
        }
    };

    void saveToFile(const string &filename)
    {
        ofstream file(filename);
        if (file.is_open())
        {
            for (const auto &lista : matrizAdy)
            {
                for (const auto &elemento : lista)
                {
                    file << elemento << " ";
                }
                file << endl;
            }
            file.close();
            // cout << "Los datos se han guardado en el archivo \"" << filename << "\"." << endl;
        }
        else
        {
            cout << "No se pudo abrir el archivo \"" << filename << "\" para guardar los datos." << endl;
        }
    }
};
// class Profesional
// {
// private:
//     long id;
//     string nombre;

// public:
//     Profesional(long id, string nombre) : id(id), nombre(nombre) {}

//     bool operator==(const Profesional &otro) const
//     {
//         return id == otro.id;
//     }

//     bool operator!=(const Profesional &otro) const
//     {
//         return id != otro.id;
//     }

//     /*string operator << (const Profesional& otro) const {
//       return nombre;
//     }*/

//     friend ostream &operator<<(ostream &os, const Profesional &profesional)
//     {
//         os << profesional.nombre;
//         return os;
//     }
// };

// int main()
// {
//     grafo<Profesional> *graf = new grafo<Profesional>();
//     graf->agregarArista(Profesional(0, "A"), Profesional(1, "B"));
//     graf->agregarArista(Profesional(0, "A"), Profesional(2, "C"));
//     graf->agregarArista(Profesional(1, "B"), Profesional(3, "D"));
//     graf->agregarArista(Profesional(2, "C"), Profesional(3, "D"));
//     graf->agregarArista(Profesional(2, "C"), Profesional(4, "E"));
//     graf->agregarArista(Profesional(3, "D"), Profesional(4, "E"));
//     graf->agregarArista(Profesional(3, "D"), Profesional(5, "F"));

//     graf->imprimeConexionesDirectas(Profesional(0, "A"));
//     graf->imprimeConexionesDirectas(Profesional(3, "D"));
//     graf->imprimeConexionesDirectas(Profesional(2, "C"));

//     delete graf;
//     return 0;
// }

/*
*** Uso de templates
*** Uso de tipo de dato compuesto(Por ejemplo: Persona)
Búsqueda por criterio de comparación de puntero función
*** Aplicación de un caso de prueba: Red amigos(8 personas con amistades entre si)
Probar con un BFS
*** Probar con una lista de Ady.
Implementar el DFS (Primero en profundidad)
*/
