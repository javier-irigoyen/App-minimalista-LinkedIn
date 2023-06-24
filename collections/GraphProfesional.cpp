#include "../structures/Graph.cpp"
#include "../model/profesional.hpp"

class GraphProfesional
{
    Graph<Profesional> *grafoProfesional;
    // opcional la considerar como atributo de clase
    void (*imprimir)(Profesional);
    short (*criterioN)(Profesional, Profesional);
    short (*criterioD)(Profesional, Profesional);
    short (*criterioId)(Profesional, Profesional);

public:
    GraphProfesional()
    {
        imprimir = [](Profesional p) -> void
        { cout << p.getId() << "\t" << p.getName() << "\t" << p.getMail() << "\t" << p.getPhone() << "\t" << p.getDni() << endl; };
        criterioN = [](Profesional a, Profesional b) -> short
        { return a.getName().compare(b.getName()); };
        criterioD = [](Profesional a, Profesional b) -> short
        {
            if (a.getDni() == b.getDni())
                return 0;
            else if (a.getDni() > b.getDni())
                return 1;
            else
                return -1;
        };
        criterioId = [](Profesional a, Profesional b) -> short
        {
            if (a.getId() == b.getId())
                return 0;
            else if (a.getId() > b.getId())
                return 1;
            else
                return -1;
        };
        grafoProfesional = new Graph<Profesional>(imprimir, criterioId);
    }
    void load()
    { // reemplazar con la extracción de datos desde archivos
        grafoProfesional->agregarArista(Profesional(1, "Javier", "sharvel.irigoyen@gmail.com", 993994620, 48002717), Profesional(2, "Luis", "Luis@gmail.com", 993994620, 48002717));
        grafoProfesional->agregarArista(Profesional(1, "Javier", "sharvel.irigoyen@gmail.com", 993994620, 48002717), Profesional(4, "Francisco", "Francisco@gmail.com", 993994620, 48002717));
        grafoProfesional->agregarArista(Profesional(2, "Luis", "Luis@gmail.com", 993994620, 48002717), Profesional(3, "Andrea", "Andrea@gmail.com", 993994620, 48002717));
        grafoProfesional->agregarArista(Profesional(2, "Luis", "Luis@gmail.com", 993994620, 48002717), Profesional(4, "Francisco", "Francisco@gmail.com", 993994620, 48002717));
        grafoProfesional->agregarArista(Profesional(3, "Andrea", "Andrea@gmail.com", 993994620, 48002717), Profesional(1, "Javier", "sharvel.irigoyen@gmail.com", 993994620, 48002717));
    }
    // llamadas a las funciones genericas de las estructuras de datos con sus respectivo objetos de la clase modelo
    void print()
    {
        cout << "Impresion: " << endl;
        grafoProfesional->imprimeConexionesDirectas(Profesional(1, "Javier", "sharvel.irigoyen@gmail.com", 993994620, 48002717));
        cout << endl;
    }
};
