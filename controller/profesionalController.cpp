#include <iostream>

#include "controller.hpp"
#include "empresaViewController.hpp"
#include "profesionalViewController.hpp"
#include "profesionalController.hpp"
#include "../view/view.hpp"
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"
#include "../collections/GraphProfesional.hpp"

// PROFESIONAL
void ProfesionalController::registrarProfesional()
{
    cout << "Registro Profesional" << endl;
    ul id = View::obtenerId();
    string nombre = View::obtenerNombre();
    string correo = View::obtenerCorreo();
    ul telefono = View::obtenerTelefono();
    ul dni = View::obtenerDni();

    Profesional profesional = Profesional(id, nombre, correo, telefono, dni);
    profesional.save();

    cout << "¡Registro exitoso como profesional!" << endl;
    ProfesionalViewController::menuProfesional(profesional);
}

// INTERACCION CON MODELOS
void ProfesionalController::recomendarProfesional() {}

void ProfesionalController::registrarHabilidad() {}
void ProfesionalController::editarHabilidad() {}
void ProfesionalController::eliminarHabilidad() {}

void ProfesionalController::registrarEducacion() {}
void ProfesionalController::editarEducacion() {}
void ProfesionalController::eliminarEducacion() {}

void ProfesionalController::registrarContacto(Profesional profesional)
{
    cout << "Registro Contacto" << endl;
    ul id = View::obtenerId();
    string nombre = View::obtenerNombre();
    string correo = View::obtenerCorreo();
    ul telefono = View::obtenerTelefono();
    ul dni = View::obtenerDni();

    Profesional contacto = Profesional(id, nombre, correo, telefono, dni);
    GraphProfesional::getGrafoProfesionales()->agregarArista(profesional, contacto);
    GraphProfesional::save();

    cout << "¡Registro exitoso como profesional!" << endl;
    ProfesionalViewController::menuProfesional(profesional);
}
void ProfesionalController::editarContacto() {}
void ProfesionalController::eliminarContacto() {}

void ProfesionalController::registrarPortafolio() {}
void ProfesionalController::editarPortafolio() {}
void ProfesionalController::eliminarPortafolio() {}

void ProfesionalController::registrarPublicacion() {}
void ProfesionalController::editarPublicacion() {}
void ProfesionalController::eliminarPublicacion() {}

void ProfesionalController::puestosDeTrabajoCategoria() {}
void ProfesionalController::puestosDeTrabajoRecientes() {}

// void Controller::registrarPuestosDeTrabajo(){}
// void Controller::editarPuestosDeTrabajo(){}
// void Controller::eliminarPuestosDeTrabajo(){}

// void Controller::registrarEvento(){}
// void Controller::editarEvento(){}
// void Controller::eliminarEvento(){}
