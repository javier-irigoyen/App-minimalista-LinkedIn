#ifndef __EMPRESA_CPP__
#define __EMPRESA_CPP__
#include "empresa.hpp"

Empresa::Empresa(const string& nombre, const string& correo, const string& telefono) {
    this->nombre = nombre;
    this->correo = correo;
    this->telefono = telefono;
}

// Implementa los demás métodos y atributos del modelo
#endif
