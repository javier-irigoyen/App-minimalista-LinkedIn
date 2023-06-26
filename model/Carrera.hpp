#ifndef __CARRERA_HPP__
#define __CARRERA_HPP__

#include <string>
using namespace std;
class Carrera
{
private:
    unsigned long id;
    string nombre;
    short anhosEstudio;

public:
    Carrera(unsigned long id = 0, string nombre = "", short anhosEstudio = 0);
    unsigned long getId();
    void setId(unsigned long id);
    string getNombre();
    void setNombre(string nombre);
    short getAnhosEstudio();
    void setAnhosEstudio(short anhosEstudio);
};

#endif
