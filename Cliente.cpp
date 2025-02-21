#include"Persona.cpp"
#include<iostream>
using namespace std;

class Cliente : Persona{
	
	private :
		string nit;
		
		// metodos (constructor y metodos crud)
		
		public:
			Cliente(){
			}
			Cliente(string nom,string,ape,string dir,string fn,string n,int tel):Persona(nom,ape,dir,fn,tel){
				nit=n;
			}
			//set= modificar un atibuto o para enviar datos al atributo
			
			void setnit(string n){
				nit=n;
			}
			void setnombres(string nom){
				nombres=nom;
			}
			void setapellidos(string ape){
				apellidos=ape;
			}
			void setdireccion(string dir){
				direccion=dir;
			}
			void setfechanacimiento(string fn){
				fecha_nacimiento=fn;
			}
			void settelefono(int tel){
				telefono=tel;
			}
			
			string getnit(){
				return nit;
			}
			string getnombres(){
				return nombres;
			}
			string getapellidos(){
				return apellidos;
			}
			string getdireccion(){
				return direccion;
			}
			string getfechanacimiento(){
				return fecha_nacimiento;
			}
			int gettelefono(){
				return telefono;
			}
			void leer(){
				cout<<"nit: "<<nit<<endl;
				cout<<"nombres: "<<nombres<<endl;
				cout<<"apellidos: "<<apellidos<<endl;
				cout<<"direccion: "<<direccion<<endl;
				cout<<"fecha de nacimiento: "<<fecha_nacimiento<<endl;
				cout<<"telefono: "<<telefono<<endl;
			}
			
};
