
#include "puestoTrabajo.hpp"

PuestoTrabajo::PuestoTrabajo() {}
PuestoTrabajo::PuestoTrabajo(unsigned long id, string rol) : id(id), rol(rol) {}
unsigned long PuestoTrabajo::getId() { return id; }
string PuestoTrabajo::getRol() { return rol; }

ostream &operator<<(ostream &os, const PuestoTrabajo &puesto)
{
    os << "ID: " << puesto.id << ", Rol: " << puesto.rol;
    return os;
}
