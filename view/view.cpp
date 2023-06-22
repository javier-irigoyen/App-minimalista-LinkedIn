#ifndef __VIEW_CPP__
#define __VIEW_CPP__
#include "view.hpp"

// MENSAJE BIENVENIDA
void View::mostrarBienvenida()
{
    cout << "Bienvenid@ a la aplicación minimalista de LinkedIn" << endl;
}
void View::mostrarBienvenidaUsuario(string name)
{
    cout << "Hola " + name << endl;
}

// OPCIONES INICIALES
void View::mostrarMenuOpcionesInicial()
{
    cout << "Seleccione una opción:" << endl;
    cout << "1. Registrarse" << endl;
    cout << "2. Iniciar sesión" << endl;
    cout << "3. Salir" << endl;
}
// CAPTURAR OPCION
int View::obtenerOpcion()
{
    int opcion;
    cout << "Opción: ";
    cin >> opcion;
    cin.ignore();
    return opcion;
}

// MENU TIPO DE USUARIO
void View::mostrarMenuTipoUsuario()
{
    cout << "¿Es usted un profesional o una empresa?" << endl;
    cout << "1. Profesional" << endl;
    cout << "2. Empresa" << endl;
}

// CAPTURAR DATOS
string View::obtenerNombre()
{
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    return nombre;
}

string View::obtenerTelefono()
{
    string telefono;
    cout << "Ingrese su teléfono: ";
    getline(cin, telefono);
    return telefono;
}

string View::obtenerCorreo()
{
    string correo;
    cout << "Ingrese su correo electrónico: ";
    getline(cin, correo);
    return correo;
}
string View::obtenerPassword()
{
    string password;
    cout << "Ingrese su contraseña: ";
    getline(cin, password);
    return password;
}

// static string obtenerPuesto()
// {
//     string correo;
//     cout << "Ingrese su correo electrónico: ";
//     getline(cin, correo);
//     return correo;
// }

// MENU PROFESIONAL
void View::mostrarMenuProfesional(string name)
{

    View::mostrarBienvenidaUsuario(name);
    cout << "1. Gestionar perfil" << endl;
    cout << "2. Gestionar contactos" << endl;
    cout << "3. Gestionar portafolios" << endl;
    cout << "4. Gestionar publicaciones" << endl;
    cout << "5. Mostar puestos de trabajo de las empresas" << endl;
    cout << "6. Recomendar profesional" << endl;
    cout << "7. Salir" << endl;
};

// SUBMENU PROFESIONAL PERFIL
void View::mostrarGestionPerfilProfesional()
{
    cout << "Perfil" << endl;
    cout << "1. Gestionar Habilidades" << endl;
    cout << "2. Gestionar Experiencia Laboral" << endl;
    cout << "3. Gestionar Educación" << endl;
    cout << "4. Salir" << endl;
};

// SUBMENU PROFESIONAL PERFIL HABILIDADES
void View::mostrarGestionPerfilProfesionalHabilidad()
{
    cout << "Perfil" << endl;
    cout << "1. Registrar nueva habilidad" << endl;
    cout << "2. Editar habilidad" << endl;
    cout << "3. Eliminar habilidad" << endl;
    cout << "4. Salir" << endl;
};
// SUBMENU PROFESIONAL PERFIL EXPERIENCIA-LABORAL
void View::mostrarGestionPerfilProfesionalExpLaboral()
{
    cout << "Perfil" << endl;
    cout << "1. Registrar nueva Experiencia Laboral" << endl;
    cout << "2. Editar Experiencia Laboral" << endl;
    cout << "3. Eliminar Experiencia Laboral" << endl;
    cout << "4. Salir" << endl;
};
// SUBMENU PROFESIONAL PERFIL EDUCACION
void View::mostrarGestionPerfilProfesionalEducacion()
{
    cout << "Perfil" << endl;
    cout << "1. Registrar nueva Educacion" << endl;
    cout << "2. Editar Educacion" << endl;
    cout << "3. Eliminar Educacion" << endl;
    cout << "4. Salir" << endl;
};

// GESTIONAR CONTACTOS
void View::mostrarGestionContactosProfesional()
{
    cout << "Contactos" << endl;
    cout << "1. Registrar nuevo contacto" << endl;
    cout << "2. Editar Contacto" << endl;
    cout << "3. Eliminar Contacto" << endl;
    cout << "4. Salir" << endl;
};
// GESTIONAR PORTAFOLIOS
void View::mostrarGestionPortafoliosProfesional()
{
    cout << "Portafolios" << endl;
    cout << "1. Registrar nuevo Portafolio" << endl;
    cout << "2. Editar Portafolio" << endl;
    cout << "3. Eliminar Portafolio" << endl;
    cout << "4. Salir" << endl;
};
// GESTIONAR PUBLICACIONES
void View::mostrarGestionPublicacionesProfesional()
{
    cout << "Publicaciones" << endl;
    cout << "1. Registrar nueva Publicacion" << endl;
    cout << "2. Editar Publicacion" << endl;
    cout << "3. Eliminar Publicacion" << endl;
    cout << "4. Salir" << endl;
};
// BUSQUEDA DE PUESTOS DE TRABAJOS DISPONIBLES
void View::mostrarPuestosDeTrabajos()
{
    cout << "Puestos de trabajos" << endl;
    cout << "1. Mostrar por categoria" << endl;
    cout << "2. Mostrar por más recientes" << endl;
    cout << "3. Salir" << endl;
};
// MENU EMPRESA
void View::mostrarMenuEmpresa(string name)
{
    View::mostrarBienvenidaUsuario(name);
    cout << "1. Gestionar puestos de trabajo" << endl;
    cout << "2. Gestionar eventos" << endl;
    cout << "3. Salir" << endl;
};
// MENU EMPRESA PUESTOS-DE-TRABAJO
void View::mostrarGestionPuestosDeTrabajoEmpresa()
{
    cout << "Perfil" << endl;
    cout << "1. Registrar nuevo Puesto de trabajo" << endl;
    cout << "2. Editar Puesto de trabajo" << endl;
    cout << "3. Eliminar Puesto de trabajo" << endl;
    cout << "4. Salir" << endl;
};
// MENU EMPRESA EVENTOS
void View::mostrarGestionEventosEmpresa()
{
    cout << "Perfil" << endl;
    cout << "1. Registrar nuevo Evento" << endl;
    cout << "2. Editar Evento" << endl;
    cout << "3. Eliminar Evento" << endl;
    cout << "4. Salir" << endl;
};

// MENSAJE DE ERROR
void View::mostrarError()
{
    cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
    cout << "(presione una tecla para continuar ...)" << endl;
    getchar();
}
void View::salir()
{
    cout << "Gracias por utilizar la aplicación. ¡Hasta luego!" << endl;
}

void View::clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

// Implementa los demás métodos de la vista
#endif
