#ifndef __PROFESIONAL_CONTROLLER_CPP__
#define __PROFESIONAL_CONTROLLER_CPP__
#include <iostream>

#include "controller.hpp"
#include "empresaViewController.hpp"
#include "profesionalViewController.hpp"
#include "profesionalController.hpp"
#include "../view/view.hpp"
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"

// PROFESIONAL
void ProfesionalController::registrarProfesional()
{
    string nombre = View::obtenerNombre();
    string telefono = View::obtenerTelefono();
    string correo = View::obtenerCorreo();

    // Realizar el registro del profesional
    // ...

    cout << "¡Registro exitoso como profesional!" << endl;
    ProfesionalViewController::menuProfesional(nombre);
}

// INTERACCION CON MODELOS
void ProfesionalController::recomendarProfesional(){}

void ProfesionalController::registrarHabilidad(){}
void ProfesionalController::editarHabilidad(){}
void ProfesionalController::eliminarHabilidad(){}

void ProfesionalController::registrarEducacion(){}
void ProfesionalController::editarEducacion(){}
void ProfesionalController::eliminarEducacion(){}

void ProfesionalController::registrarContacto(){}
void ProfesionalController::editarContacto(){}
void ProfesionalController::eliminarContacto(){}

void ProfesionalController::registrarPortafolio(){}
void ProfesionalController::editarPortafolio(){}
void ProfesionalController::eliminarPortafolio(){}

void ProfesionalController::registrarPublicacion(){}
void ProfesionalController::editarPublicacion(){}
void ProfesionalController::eliminarPublicacion(){}

void ProfesionalController::puestosDeTrabajoCategoria(){}
void ProfesionalController::puestosDeTrabajoRecientes(){}

// void Controller::registrarPuestosDeTrabajo(){}
// void Controller::editarPuestosDeTrabajo(){}
// void Controller::eliminarPuestosDeTrabajo(){}

// void Controller::registrarEvento(){}
// void Controller::editarEvento(){}
// void Controller::eliminarEvento(){}
#endif
