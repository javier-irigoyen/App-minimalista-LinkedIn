#include "Carrera.hpp"

Carrera::Carrera(unsigned long id, string nombre, short anhosEstudio)
    : id(id), nombre(nombre), anhosEstudio(anhosEstudio) {}

unsigned long Carrera::getId()
{
    return id;
}

void Carrera::setId(unsigned long id)
{
    this->id = id;
}

string Carrera::getNombre()
{
    return nombre;
}

void Carrera::setNombre(string nombre)
{
    this->nombre = nombre;
}

short Carrera::getAnhosEstudio()
{
    return anhosEstudio;
}

void Carrera::setAnhosEstudio(short anhosEstudio)
{
    this->anhosEstudio = anhosEstudio;
}
