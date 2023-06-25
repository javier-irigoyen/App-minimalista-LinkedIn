#ifndef __EMPRESA_CONTROLLER_HPP__
#define __EMPRESA_CONTROLLER_HPP__
#include <iostream>
#include <string>
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"
#include "controller.hpp"

using namespace std;

class EmpresaController : public Controller
{
public:
    static void registrarEmpresa();
    static void registrarPuestosDeTrabajo();
    static void editarPuestosDeTrabajo();
    static void eliminarPuestosDeTrabajo();

    static void registrarEvento();
    static void editarEvento();
    static void eliminarEvento();
};

#endif
