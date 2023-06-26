#include "InstitucionEducativa.hpp"

InstitucionEducativa::InstitucionEducativa(string nombre, string direccion, string pais, int ranking)
    : nombre(nombre), direccion(direccion), pais(pais), ranking(ranking) {}

string InstitucionEducativa::getNombre()
{
    return nombre;
}

void InstitucionEducativa::setNombre(string nombre)
{
    this->nombre = nombre;
}

string InstitucionEducativa::getDireccion()
{
    return direccion;
}

void InstitucionEducativa::setDireccion(string direccion)
{
    this->direccion = direccion;
}

string InstitucionEducativa::getPais()
{
    return pais;
}

void InstitucionEducativa::setPais(string pais)
{
    this->pais = pais;
}

int InstitucionEducativa::getRanking()
{
    return ranking;
}

void InstitucionEducativa::setRanking(int ranking)
{
    this->ranking = ranking;
}
