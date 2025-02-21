#include<iostream>
using namespace std;
class Persona{
	//atributos
	protected :// solamente para heredar
		string nombres,apellidos,direccion,fecha_nacimiento;
		int telefono;
	
	//metodos 
	//constructor 
	protected :
	Persona(){
		
	}
	Persona(string nom,string ape,string dir,string fn,int tel){
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		fecha_nacimiento=fn;
		telefono=tel;
		
	}
	//crud
	void crear();
	void leer();
	void actualizar();
	void borrar();
	
};
