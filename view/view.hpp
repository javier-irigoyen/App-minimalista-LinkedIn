#ifndef __VIEW_HPP__
#define __VIEW_HPP__
#include <iostream>
#include <string>

using namespace std;

class View {
public:
    static void mostrarMensajeBienvenida();
    static void mostrarMenuOpcionesInicial();
    static int obtenerOpcion();
    static void mostrarMenuTipoUsuario();
    static string obtenerTipoUsuario();
    static string obtenerNombre();
    static string obtenerTelefono();
    static string obtenerCorreo();

    static void mostrarMenuProfesional();
    static void mostrarMensajeError();
    static void salir();
    static void clearScreen();
    // Otros métodos de la vista
};
#endif
