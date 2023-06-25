#ifndef __VIEW_HPP__
#define __VIEW_HPP__
#include <iostream>
#include <string>
typedef unsigned long ul;
using namespace std;

class View
{
public:
    static void mostrarBienvenida();
    static void mostrarMenuOpcionesInicial();
    static int obtenerOpcion();
    static void mostrarMenuTipoUsuario();
    static void mostrarBienvenidaUsuario(string name);

    // INPUTS
    static string obtenerTipoUsuario();
    static string obtenerNombre();
    static ul obtenerTelefono();
    static ul obtenerId();
    static ul obtenerDni();
    static string obtenerCorreo();
    static string obtenerPassword();

    // PROFESIONAL
    static void mostrarMenuProfesional(string name);
    static void mostrarGestionPerfilProfesional();
    static void mostrarGestionPerfilProfesionalHabilidad();
    static void mostrarGestionPerfilProfesionalExpLaboral();
    static void mostrarGestionPerfilProfesionalEducacion();

    static void mostrarGestionContactosProfesional();
    static void mostrarGestionPortafoliosProfesional();
    static void mostrarGestionPublicacionesProfesional();

    static void mostrarPuestosDeTrabajos();

    // EMPRESA
    static void mostrarMenuEmpresa(string name);
    static void mostrarGestionPuestosDeTrabajoEmpresa();
    static void mostrarGestionEventosEmpresa();

    static void mostrarError();
    static void salir();
    static void clearScreen();
    // Otros métodos de la vista
};
#endif
