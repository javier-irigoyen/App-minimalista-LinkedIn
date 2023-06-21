#ifndef __PROFESIONAL_HPP__
#define __PROFESIONAL_HPP__
#include <string>

using namespace std;

class Profesional {
private:
    string nombre;
    string correo;
    string telefono;

public:
    Profesional(const string& nombre, const string& correo, const string& telefono);
    // Otros métodos y atributos del modelo
};
#endif
