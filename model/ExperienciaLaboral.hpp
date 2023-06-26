#ifndef __EXPERIENCIALABORAL_HPP__
#define __EXPERIENCIALABORAL_HPP__

#include <vector>
#include <string>
#include "empresa.hpp"
using namespace std;

class ExperienciaLaboral
{
private:
    unsigned long id;
    vector<Empresa> empresas;
    string rol;

public:
    ExperienciaLaboral() {}

    ExperienciaLaboral(unsigned long id = 0, vector<Empresa> empresas = vector<Empresa>(), string rol = "");

    unsigned long getId();

    void setId(unsigned long id);

    vector<Empresa> getEmpresas();

    void setEmpresas(vector<Empresa> empresas);

    string getRol();

    void setRol(string rol);
};

#endif
