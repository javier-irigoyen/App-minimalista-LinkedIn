#include <iostream>
#include <string>
using namespace std;

template <class T>
class HashEntidad
{
private:
    int key;
    T value;

public:
    HashEntidad(int key, T value)
    {
        this->key = key;
        this->value = value;
    }

    int getKey() { return key; }
    T getValue() { return value; }
};

template <class T>
class HashTabla
{
private:
    HashEntidad<T> **tabla;
    int numElementos;
    int TABLE_SIZE;

public:
    HashTabla(int TABLE_SIZE)
    {
        this->TABLE_SIZE = TABLE_SIZE;
        tabla = new HashEntidad<T> *[TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; ++i)
        {
            tabla[i] = nullptr;
        }
        numElementos = 0;
    }

    int HashFunction1(int key)
    {
        int hash = (key * 7 - 13) % 100;
        if (hash < 0)
        {
            hash = -hash;
        }
        return hash;
    }

    ~HashTabla()
    {
        for (int i = 0; i < TABLE_SIZE; ++i)
        {
            if (tabla[i] != nullptr)
            {
                delete tabla[i];
            }
        }
        delete[] tabla;
    }

    void insertar(int key, T value)
    {
        int base, step, hash;

        if (numElementos == TABLE_SIZE)
            return;

        base = HashFunction1(key);
        hash = base;
        step = 0;
        while (tabla[hash] != nullptr)
        {
            hash = (base + step) % TABLE_SIZE;
            step++;
        }
        tabla[hash] = new HashEntidad<T>(key, value);
        numElementos++;
    }

    int size()
    {
        return TABLE_SIZE;
    }

    int sizeactual()
    {
        return numElementos;
    }

    void imprimirTablaHash()
    {
        cout << "SIZE TABLA: " << size() << endl;
        cout << "SIZE ACTUAL: " << sizeactual() << endl;
        for (int i = 0; i < size(); ++i)
        {
            if (tabla[i] != nullptr)
            {
                cout << "Hash: " << i << ", Key: " << tabla[i]->getKey() << ", Value: " << tabla[i]->getValue() << endl;
            }
        }
    }

    int buscar(int key)
    {
        int base = HashFunction1(key);
        int hash = base;
        int step = 0;
        while (tabla[hash] != nullptr)
        {
            if (tabla[hash]->getKey() == key)
            {
                return hash;
            }
            hash = (base + step) % TABLE_SIZE;
            step++;
        }
        return -1; // No se encontró el elemento
    }

    bool existeElemento(int key)
    {
        return (buscar(key) != -1);
    }
};
