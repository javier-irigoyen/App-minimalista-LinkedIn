// Habilidad.cpp

#include "Habilidad.hpp"

Habilidad::Habilidad(unsigned long id, vector<string> lenguajesProgramacion, vector<string> idiomas, vector<string> habilidadesBlandas)
    : id(id), lenguajesProgramacion(lenguajesProgramacion), idiomas(idiomas), habilidadesBlandas(habilidadesBlandas) {}

unsigned long Habilidad::getId()
{
    return id;
}

void Habilidad::setId(unsigned long id)
{
    this->id = id;
}

vector<string> Habilidad::getLenguajesProgramacion()
{
    return lenguajesProgramacion;
}

void Habilidad::setLenguajesProgramacion(vector<string> lenguajesProgramacion)
{
    this->lenguajesProgramacion = lenguajesProgramacion;
}

vector<string> Habilidad::getIdiomas()
{
    return idiomas;
}

void Habilidad::setIdiomas(vector<string> idiomas)
{
    this->idiomas = idiomas;
}

vector<string> Habilidad::getHabilidadesBlandas()
{
    return habilidadesBlandas;
}

void Habilidad::setHabilidadesBlandas(vector<string> habilidadesBlandas)
{
    this->habilidadesBlandas = habilidadesBlandas;
}
