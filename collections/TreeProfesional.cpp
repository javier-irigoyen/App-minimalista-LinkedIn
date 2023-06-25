#include "../structures/TreeAVL.cpp"
#include "../model/Empresa.hpp"

// class TreeEmpresa
// {
//     ArbolAVL<Empresa> *tree;
//     // opcional la considerar como atributo de clase
//     void (*imprimir)(Empresa);
//     short (*criterioN)(Empresa, Empresa);
//     short (*criterioD)(Empresa, Empresa);

// public:
//     TreeEmpresa()
//     {
//         imprimir = [](Empresa p) -> void
//         { cout << p.getId() << "\t" << p.getName() << "\t" << p.getMail() << "\t" << p.getPhone() << "\t" << p.getDni() << endl; };
//         criterioN = [](Empresa a, Empresa b) -> short
//         { return a.getName().compare(b.getName()); };
//         criterioD = [](Empresa a, Empresa b) -> short
//         {
//             if (a.getDni() == b.getDni())
//                 return 0;
//             else if (a.getDni() > b.getDni())
//                 return 1;
//             else
//                 return -1;
//         };
//         tree = new ArbolAVL<Empresa>(imprimir, criterioN);
//     }
//     void load()
//     { // reemplazar con la extracción de datos desde archivos
//         tree->Insertar(Empresa(1, "Javier", "sharvel.irigoyen@gmail.com", 993994620, 48002717));
//         tree->Insertar(Empresa(2, "Javier", "sharvel.irigoyen@gmail.com", 993994620, 48002717));
//         tree->Insertar(Empresa(3, "Javier", "sharvel.irigoyen@gmail.com", 993994620, 48002717));
//         tree->Insertar(Empresa(4, "Javier", "sharvel.irigoyen@gmail.com", 993994620, 48002717));
//     }
//     // llamadas a las funciones genericas de las estructuras de datos con sus respectivo objetos de la clase modelo
//     void print()
//     {
//         cout << "Impresion inOrden de elementos: " << endl;
//         tree->inOrden();
//         cout << endl;
//     }
// };
