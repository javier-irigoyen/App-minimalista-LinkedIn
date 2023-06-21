#ifndef __EMPRESA_HPP__
#define __EMPRESA_HPP__
#include <string>

using namespace std;

class Empresa {
private:
    string nombre;
    string correo;
    string telefono;

public:
    Empresa(const string& nombre, const string& correo, const string& telefono);
    // Otros métodos y atributos del modelo
};
#endif
