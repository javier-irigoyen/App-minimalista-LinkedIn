
//----------------------NUEVO---------------------//

#ifndef __EDUCACION_HPP__
#define __EDUCACION_HPP__

#include "Carrera.hpp"

class Educacion
{
private:
    unsigned long id;
    unsigned long idInstitucionEducativa;
    int anhoIngreso;
    int anhoEgreso;
    Carrera carrera;

public:
    Educacion(unsigned long id, unsigned long idInstitucionEducativa, int anhoIngreso, int anhoEgreso, Carrera carrera);

    unsigned long getId();

    void setId(unsigned long id);

    unsigned long getIdInstitucionEducativa();

    void setIdInstitucionEducativa(unsigned long idInstitucionEducativa);

    int getAnhoIngreso();

    void setAnhoIngreso(int anhoIngreso);

    int getAnhoEgreso();

    void setAnhoEgreso(int anhoEgreso);

    Carrera getCarrera();

    void setCarrera(Carrera carrera);
};

#endif
