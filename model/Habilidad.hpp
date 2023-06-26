// Habilidad.hpp

#ifndef __HABILIDAD_HPP__
#define __HABILIDAD_HPP__

#include <vector>
#include <string>
using namespace std;

class Habilidad
{
private:
    unsigned long id;
    vector<string> lenguajesProgramacion;
    vector<string> idiomas;
    vector<string> habilidadesBlandas;

public:
    Habilidad(unsigned long id = 0, vector<string> lenguajesProgramacion = vector<string>(), vector<string> idiomas = vector<string>(), vector<string> habilidadesBlandas = vector<string>());

    unsigned long getId();
    void setId(unsigned long id);

    vector<string> getLenguajesProgramacion();
    void setLenguajesProgramacion(vector<string> lenguajesProgramacion);

    vector<string> getIdiomas();
    void setIdiomas(vector<string> idiomas);

    vector<string> getHabilidadesBlandas();
    void setHabilidadesBlandas(vector<string> habilidadesBlandas);
};

#endif
