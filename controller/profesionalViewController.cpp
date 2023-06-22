#ifndef __PROFESIONAL_VIEW_CONTROLLER_CPP__
#define __PROFESIONAL_VIEW_CONTROLLER_CPP__
#include <iostream>

#include "controller.hpp"
#include "empresaViewController.hpp"
#include "profesionalViewController.hpp"
#include "../view/view.hpp"
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"

// PROFESIONAL
void ProfesionalViewController::registrarProfesional()
{
    string nombre = View::obtenerNombre();
    string telefono = View::obtenerTelefono();
    string correo = View::obtenerCorreo();

    // Realizar el registro del profesional
    // ...

    cout << "¡Registro exitoso como profesional!" << endl;
    ProfesionalViewController::menuProfesional(nombre);
}

// MENU PROFESIONAL LOGEADO
void ProfesionalViewController::menuProfesional(string name)
{
    View::mostrarMenuProfesional(name);
    int opcion = View::obtenerOpcion();

    switch (opcion)
    {
    case 1:
    {
        // View::mostrarGestionPerfilProfesional();
        // int opcion = View::obtenerOpcion();
        ProfesionalViewController::gestionarPerfil();
    }
    case 2:
    {

        ProfesionalViewController::gestionarContactos();
    }
    case 3:
    {

        ProfesionalViewController::gestionarPortafolios();
    }
    case 4:
    {

        ProfesionalViewController::gestionarPublicaciones();
    }
    case 5:
    {

        ProfesionalViewController::puestosDeTrabajoDisponibles();
    }
    case 6:
    {

        ProfesionalViewController::recomendarProfesional();
    }
    case 7:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::menuProfesional(name);
    }
    }
}

// GESTIONAR PERFIL PROFESIONAL
void ProfesionalViewController::gestionarPerfil()
{
    View::mostrarGestionPerfilProfesional();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::gestionarHabilidades();
    }
    case 2:
    {

        ProfesionalViewController::gestionarExpLaboral();
    }
    case 3:
    {

        ProfesionalViewController::gestionarEducacion();
    }
    case 4:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarPerfil();
    }
    }
}

// GESTIONAR PERFIL PROFESIONAL HABILIDADES
void ProfesionalViewController::gestionarHabilidades()
{
    View::mostrarGestionPerfilProfesionalHabilidad();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::registrarHabilidad();
    }
    case 2:
    {

        ProfesionalViewController::editarHabilidad();
    }
    case 3:
    {

        ProfesionalViewController::eliminarHabilidad();
    }
    case 4:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarHabilidades();
    }
    }
}
// GESTIONAR PERFIL PROFESIONAL EXPERIENCIA LABORAL
void ProfesionalViewController::gestionarExpLaboral()
{
    View::mostrarGestionPerfilProfesionalExpLaboral();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::registrarHabilidad();
    }
    case 2:
    {

        ProfesionalViewController::editarHabilidad();
    }
    case 3:
    {

        ProfesionalViewController::eliminarHabilidad();
    }
    case 4:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarExpLaboral();
    }
    }
}
// GESTIONAR PERFIL PROFESIONAL EDUCACION
void ProfesionalViewController::gestionarEducacion()
{
    View::mostrarGestionPerfilProfesionalEducacion();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::registrarEducacion();
    }
    case 2:
    {

        ProfesionalViewController::editarEducacion();
    }
    case 3:
    {

        ProfesionalViewController::eliminarEducacion();
    }
    case 4:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarEducacion();
    }
    }
}

//GESTIONAR CONTACTOS
void ProfesionalViewController::gestionarContactos()
{
    View::mostrarGestionContactosProfesional();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::registrarContacto();
    }
    case 2:
    {

        ProfesionalViewController::editarContacto();
    }
    case 3:
    {

        ProfesionalViewController::eliminarContacto();
    }
    case 4:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarContactos();
    }
    }
}
//GESTIONAR PORTAFOLIO
void ProfesionalViewController::gestionarPortafolios()
{
    View::mostrarGestionPortafoliosProfesional();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::registrarPortafolio();
    }
    case 2:
    {

        ProfesionalViewController::editarPortafolio();
    }
    case 3:
    {

        ProfesionalViewController::eliminarPortafolio();
    }
    case 4:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarPortafolios();
    }
    }
}

//GESTIONAR PUBLICACIONES
void ProfesionalViewController::gestionarPublicaciones()
{
    View::mostrarGestionPublicacionesProfesional();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::registrarPublicacion();
    }
    case 2:
    {

        ProfesionalViewController::editarPublicacion();
    }
    case 3:
    {

        ProfesionalViewController::eliminarPublicacion();
    }
    case 4:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarPublicaciones();
    }
    }
}

//BUSCAR PUESTOS DE TRABAJOS DISPONIBLES
void ProfesionalViewController::puestosDeTrabajoDisponibles()
{
    View::mostrarPuestosDeTrabajos();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::puestosDeTrabajoCategoria();
    }
    case 2:
    {

        ProfesionalViewController::puestosDeTrabajoRecientes();
    }
    case 3:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::puestosDeTrabajoDisponibles();
    }
    }
}

// INTERACCION CON MODELOS
void ProfesionalViewController::recomendarProfesional(){}

void ProfesionalViewController::registrarHabilidad(){}
void ProfesionalViewController::editarHabilidad(){}
void ProfesionalViewController::eliminarHabilidad(){}

void ProfesionalViewController::registrarEducacion(){}
void ProfesionalViewController::editarEducacion(){}
void ProfesionalViewController::eliminarEducacion(){}

void ProfesionalViewController::registrarContacto(){}
void ProfesionalViewController::editarContacto(){}
void ProfesionalViewController::eliminarContacto(){}

void ProfesionalViewController::registrarPortafolio(){}
void ProfesionalViewController::editarPortafolio(){}
void ProfesionalViewController::eliminarPortafolio(){}

void ProfesionalViewController::registrarPublicacion(){}
void ProfesionalViewController::editarPublicacion(){}
void ProfesionalViewController::eliminarPublicacion(){}

void ProfesionalViewController::puestosDeTrabajoCategoria(){}
void ProfesionalViewController::puestosDeTrabajoRecientes(){}

// void Controller::registrarPuestosDeTrabajo(){}
// void Controller::editarPuestosDeTrabajo(){}
// void Controller::eliminarPuestosDeTrabajo(){}

// void Controller::registrarEvento(){}
// void Controller::editarEvento(){}
// void Controller::eliminarEvento(){}
#endif
