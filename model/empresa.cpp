#include "empresa.hpp"

Empresa::Empresa(const string &nombre, const string &correo, const string &telefono)
{
    this->nombre = nombre;
    this->correo = correo;
    this->telefono = telefono;
}
string Empresa::getFileName() const
{
    return "Empresa.txt";
}
string Empresa::getAttributes() const
{
    return nombre + "," + correo + "," + telefono;
}
// Implementa los demás métodos y atributos del modelo
