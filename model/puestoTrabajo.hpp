#ifndef __PUESTO_TRABAJO_HPP__
#define __PUESTO_TRABAJO__
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class PuestoTrabajo
{
private:
    unsigned long id;
    string rol;

public:
    PuestoTrabajo();
    PuestoTrabajo(unsigned long id, string rol);
    unsigned long getId();
    string getRol();
    friend ostream &operator<<(ostream &os, const PuestoTrabajo &puesto);
};
#endif
