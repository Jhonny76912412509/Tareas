#include<iostream>

using namespace std;

class Empleado : Persona{
	private:
		string codigo,puesto;
		
		public:
			Empleado(string nom,string ape,string dir,string fn,string n,int tel,string cod, string pue) : Persona(nom,ape,dir,fn,tel)
};
