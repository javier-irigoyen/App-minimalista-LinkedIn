#include <iostream>
#include <vector>
#include <queue>
#include <stdio.h>

using namespace std;

template <class T>
class Graph
{
private:
    int numVertices;
    vector<vector<T>> matrizAdy;

public:
    grafo()
    {
        numVertices = 0;
    }

    void agregarNodo(T tipo)
    {
        if (matrizAdy.empty())
        {
            vector<T> lista;
            lista.push_back(tipo);
            matrizAdy.push_back(lista);
            numVertices++;
        }
        else
        {
            bool existeNodo = false;
            for (int c = 0; c < matrizAdy.size(); ++c)
            {
                if (tipo == matrizAdy[c].at(0))
                {
                    existeNodo = true;
                    break;
                }
            }
            if (!existeNodo)
            {
                vector<T> lista;
                lista.push_back(tipo);
                matrizAdy.push_back(lista);
                numVertices++;
            }
        }
    }

    void agregarArista(T origen, T destino)
    {
        agregarNodo(origen);
        agregarNodo(destino);
        for (int c = 0; c < matrizAdy.size(); ++c)
        {
            if (matrizAdy[c].at(0) == origen)
            {
                matrizAdy[c].push_back(destino);
            }
            if (matrizAdy[c].at(0) == destino)
            {
                matrizAdy[c].push_back(origen);
            }
        }
    }

    void imprimeConexionesDirectas(T tipo)
    {
        cout << tipo << " = ";
        for (int c = 0; c < matrizAdy.size(); ++c)
        {
            if (matrizAdy[c].at(0) == tipo)
            {
                for (int i = 1; i < matrizAdy[c].size(); ++i)
                {
                    if (i == matrizAdy[c].size() - 1)
                    {
                        cout << matrizAdy[c].at(i);
                    }
                    else
                    {
                        cout << matrizAdy[c].at(i) << " - ";
                    }
                }
            }
        }
        cout << endl;
    }

    void muestraCaminoBFS(T origen, T destino)
    {
        vector<bool> visitado(numVertices, false);
        queue<T> cola;
        visitado[origen] = true;
        cola.push(origen);
        while (!cola.empty())
        {
            int actual = cola.front();
            cola.pop();
            cout << actual << " ";

            for (int i = 0; i < numVertices; i++)
            {
                if (matrizAdy[actual][i] && !visitado[i])
                {
                    visitado[i] = true;
                    cola.push(i);
                }
            }
        }
    };
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
