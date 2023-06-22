#ifndef __PROFESIONAL_VIEW_CONTROLLER_HPP__
#define __PROFESIONAL_VIEW_CONTROLLER_HPP__
#include <iostream>
#include <string>
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"
#include "controller.hpp"
#include "empresaViewController.hpp"

using namespace std;

class ProfesionalViewController: public Controller
{
public:
    static void registrarProfesional();

    static void menuProfesional(string nombre);

    static void gestionarPerfil();
    static void gestionarContactos();
    static void gestionarPortafolios();
    static void gestionarPublicaciones();
    static void puestosDeTrabajoDisponibles();
    static void recomendarProfesional();

    static void gestionarHabilidades();
    static void gestionarExpLaboral();
    static void gestionarEducacion();

    static void registrarHabilidad();
    static void editarHabilidad();
    static void eliminarHabilidad();

    static void registrarEducacion();
    static void editarEducacion();
    static void eliminarEducacion();

    static void registrarContacto();
    static void editarContacto();
    static void eliminarContacto();

    static void registrarPortafolio();
    static void editarPortafolio();
    static void eliminarPortafolio();

    static void registrarPublicacion();
    static void editarPublicacion();
    static void eliminarPublicacion();

    static void puestosDeTrabajoCategoria();
    static void puestosDeTrabajoRecientes();
};

#endif
