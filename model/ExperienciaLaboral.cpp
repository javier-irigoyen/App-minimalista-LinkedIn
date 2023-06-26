#include "ExperienciaLaboral.hpp"

ExperienciaLaboral::ExperienciaLaboral(unsigned long id, vector<Empresa> empresas, string rol)
    : id(id), empresas(empresas), rol(rol) {}

unsigned long ExperienciaLaboral::getId()
{
    return id;
}

void ExperienciaLaboral::setId(unsigned long id)
{
    this->id = id;
}

vector<Empresa> ExperienciaLaboral::getEmpresas()
{
    return empresas;
}

void ExperienciaLaboral::setEmpresas(vector<Empresa> empresas)
{
    this->empresas = empresas;
}

string ExperienciaLaboral::getRol()
{
    return rol;
}

void ExperienciaLaboral::setRol(string rol)
{
    this->rol = rol;
}
