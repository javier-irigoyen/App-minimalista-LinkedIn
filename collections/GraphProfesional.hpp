#ifndef __GRAPHPROFESIONAL_HPP__
#define __GRAPHPROFESIONAL_HPP__

#include "../structures/Graph.cpp"
#include "../model/profesional.hpp"

class GraphProfesional
{
    static Graph<Profesional>* grafoProfesional;

    void (*imprimir)(Profesional);
    short (*criterioN)(Profesional, Profesional);
    short (*criterioD)(Profesional, Profesional);
    short (*criterioId)(Profesional, Profesional);

public:
    GraphProfesional();

    static Graph<Profesional>* getGrafoProfesionales();

    void load();
    static void save();
    void print();
};

#endif
