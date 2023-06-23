#include "../structures/TreeAVL.cpp"
#include "../model/profesional.hpp"
class TreeProfesional {
	ArbolAVL <Profesional>* tree;
	//opcional la considerar como atributo de clase
	void(*imprimir)(Profesional);
	short(*criterioN)(Profesional, Profesional);
	short(*criterioD)(Profesional, Profesional);
public:
	TreeProfesional() {
		imprimir = [](Profesional p)->void{cout << p.getName() << "\t" << p.getMail() << "\t" << p.getPhone() << endl; };
		criterioN = [](Profesional a, Profesional b)->short {return a.getName().compare(b.getName()); };
		// criterioD = [](Profesional a, Profesional b)->short {
		// 	if (a.getDni() == b.getDni())return 0;
		// 	else if (a.getDni() > b.getDni())return 1;
		// 	else return -1;
		// };
		tree = new ArbolAVL<Profesional>(imprimir, criterioN);
	}
	void simulate() {//reemplazar con la extracción de datos desde archivos
			tree->Insertar(Profesional("Javier", "sharvel.irigoyen@gmail.com", "993994620"));
			tree->Insertar(Profesional("Javier", "sharvel.irigoyen@gmail.com", "993994620"));
			tree->Insertar(Profesional("Javier", "sharvel.irigoyen@gmail.com", "993994620"));
			tree->Insertar(Profesional("Javier", "sharvel.irigoyen@gmail.com", "993994620"));
	}
	//llamadas a las funciones genericas de las estructuras de datos con sus respectivo objetos de la clase modelo
	void print() {
		cout << "Impresion inOrden de elementos: " << endl;
		tree->inOrden();
		cout << endl;
	}
};
