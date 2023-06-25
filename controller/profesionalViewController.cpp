#include <iostream>

#include "controller.hpp"
#include "empresaViewController.hpp"
#include "profesionalViewController.hpp"
#include "profesionalController.hpp"
#include "../view/view.hpp"
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"

// PROFESIONAL

// MENU PROFESIONAL LOGEADO
void ProfesionalViewController::menuProfesional(Profesional profesional)
{
    View::mostrarMenuProfesional(profesional.getName());
    int opcion = View::obtenerOpcion();

    switch (opcion)
    {
    case 1:
    {
        // View::mostrarGestionPerfilProfesional();
        // int opcion = View::obtenerOpcion();
        ProfesionalViewController::gestionarPerfil();
        break;
    }
    case 2:
    {

        ProfesionalViewController::gestionarContactos(profesional);
        break;
    }
    case 3:
    {

        ProfesionalViewController::gestionarPortafolios();
        break;
    }
    case 4:
    {

        ProfesionalViewController::gestionarPublicaciones();
        break;
    }
    case 5:
    {

        ProfesionalViewController::puestosDeTrabajoDisponibles();
        break;
    }
    case 6:
    {

        ProfesionalViewController::recomendarProfesional();
        break;
    }
    case 7:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        // ProfesionalViewController::menuProfesional(name);
        break;
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
        break;
    }
    case 2:
    {

        ProfesionalViewController::gestionarExpLaboral();
        break;
    }
    case 3:
    {

        ProfesionalViewController::gestionarEducacion();
        break;
    }
    case 4:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarPerfil();
        break;
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
        break;
    }
    case 2:
    {

        ProfesionalViewController::editarHabilidad();
        break;
    }
    case 3:
    {

        ProfesionalViewController::eliminarHabilidad();
        break;
    }
    case 4:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarHabilidades();
        break;
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
        break;
    }
    case 2:
    {

        ProfesionalViewController::editarHabilidad();
        break;
    }
    case 3:
    {

        ProfesionalViewController::eliminarHabilidad();
        break;
    }
    case 4:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarExpLaboral();
        break;
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
        break;
    }
    case 2:
    {

        ProfesionalViewController::editarEducacion();
        break;
    }
    case 3:
    {

        ProfesionalViewController::eliminarEducacion();
        break;
    }
    case 4:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarEducacion();
        break;
    }
    }
}

// GESTIONAR CONTACTOS
void ProfesionalViewController::gestionarContactos(Profesional profesional)
{
    View::mostrarGestionContactosProfesional();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalController::registrarContacto(profesional);
        break;
    }
    case 2:
    {

        ProfesionalViewController::editarContacto();
        break;
    }
    case 3:
    {

        ProfesionalViewController::eliminarContacto();
        break;
    }
    case 4:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarContactos(profesional);
        break;
    }
    }
}
// GESTIONAR PORTAFOLIO
void ProfesionalViewController::gestionarPortafolios()
{
    View::mostrarGestionPortafoliosProfesional();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::registrarPortafolio();
        break;
    }
    case 2:
    {

        ProfesionalViewController::editarPortafolio();
        break;
    }
    case 3:
    {

        ProfesionalViewController::eliminarPortafolio();
        break;
    }
    case 4:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarPortafolios();
        break;
    }
    }
}

// GESTIONAR PUBLICACIONES
void ProfesionalViewController::gestionarPublicaciones()
{
    View::mostrarGestionPublicacionesProfesional();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::registrarPublicacion();
        break;
    }
    case 2:
    {

        ProfesionalViewController::editarPublicacion();
        break;
    }
    case 3:
    {

        ProfesionalViewController::eliminarPublicacion();
        break;
    }
    case 4:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::gestionarPublicaciones();
        break;
    }
    }
}

// BUSCAR PUESTOS DE TRABAJOS DISPONIBLES
void ProfesionalViewController::puestosDeTrabajoDisponibles()
{
    View::mostrarPuestosDeTrabajos();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        ProfesionalViewController::puestosDeTrabajoCategoria();
        break;
    }
    case 2:
    {

        ProfesionalViewController::puestosDeTrabajoRecientes();
        break;
    }
    case 3:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        ProfesionalViewController::puestosDeTrabajoDisponibles();
        break;
    }
    }
}

// INTERACCION CON MODELOS
void ProfesionalViewController::recomendarProfesional() {}

void ProfesionalViewController::registrarHabilidad() {}
void ProfesionalViewController::editarHabilidad() {}
void ProfesionalViewController::eliminarHabilidad() {}

void ProfesionalViewController::registrarEducacion() {}
void ProfesionalViewController::editarEducacion() {}
void ProfesionalViewController::eliminarEducacion() {}

void ProfesionalViewController::registrarContacto() {}
void ProfesionalViewController::editarContacto() {}
void ProfesionalViewController::eliminarContacto() {}

void ProfesionalViewController::registrarPortafolio() {}
void ProfesionalViewController::editarPortafolio() {}
void ProfesionalViewController::eliminarPortafolio() {}

void ProfesionalViewController::registrarPublicacion() {}
void ProfesionalViewController::editarPublicacion() {}
void ProfesionalViewController::eliminarPublicacion() {}

void ProfesionalViewController::puestosDeTrabajoCategoria() {}
void ProfesionalViewController::puestosDeTrabajoRecientes() {}

// void Controller::registrarPuestosDeTrabajo(){}
// void Controller::editarPuestosDeTrabajo(){}
// void Controller::eliminarPuestosDeTrabajo(){}

// void Controller::registrarEvento(){}
// void Controller::editarEvento(){}
// void Controller::eliminarEvento(){}
