#ifndef __EVENTO_HPP__
#define __EVENTO_HPP__

#include <string>
using namespace std;

class Evento
{
private:
    string tipo, titulo, descripcion, fecha, hora, lugar;

public:
    Evento(string tipo = "", string titulo = "", string descripcion = "", string fecha = "", string hora = "", string lugar = "");

    string getTipo();

    void setTipo(string tipo);

    string getTitulo();

    void setTitulo(string titulo);

    string getDescripcion();

    void setDescripcion(string descripcion);

    string getFecha();

    void setFecha(string fecha);

    string getHora();

    void setHora(string hora);

    string getLugar();

    void setLugar(string lugar);
};

#endif
