#include "Educacion.hpp"

Educacion::Educacion(unsigned long id, unsigned long idInstitucionEducativa, int anhoIngreso, int anhoEgreso, Carrera carrera)
    : id(id), idInstitucionEducativa(idInstitucionEducativa), anhoIngreso(anhoIngreso), anhoEgreso(anhoEgreso), carrera(carrera) {}

unsigned long Educacion::getId()
{
    return id;
}

void Educacion::setId(unsigned long id)
{
    this->id = id;
}

unsigned long Educacion::getIdInstitucionEducativa()
{
    return idInstitucionEducativa;
}

void Educacion::setIdInstitucionEducativa(unsigned long idInstitucionEducativa)
{
    this->idInstitucionEducativa = idInstitucionEducativa;
}

int Educacion::getAnhoIngreso()
{
    return anhoIngreso;
}

void Educacion::setAnhoIngreso(int anhoIngreso)
{
    this->anhoIngreso = anhoIngreso;
}

int Educacion::getAnhoEgreso()
{
    return anhoEgreso;
}

void Educacion::setAnhoEgreso(int anhoEgreso)
{
    this->anhoEgreso = anhoEgreso;
}

Carrera Educacion::getCarrera()
{
    return carrera;
}

void Educacion::setCarrera(Carrera carrera)
{
    this->carrera = carrera;
}
