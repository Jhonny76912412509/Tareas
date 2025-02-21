#include"Cliente.cpp"
#include<iostream>
using namespace std;

main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	cout<<"ingrese nit: ";
	cin>>nit;
	cout<<"ingrese nombres: ";
	cin>>nombres;
	cout<<"ingrese apellidos: ";
	cin>>apellidos;
	cout<<"direccion: ";
	cin>>direccion;
	cout<<"ingrese fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"ingrese telefono: ";
	cin>>telefono;
	Cliente objc = Cliente(nombres,apellidos,direccion,fecha_nacimiento,nit,telefono);
	objc.leer();
	cout<<"ingrese nit a modificar";
	cin>>nit;
	objc.setnit(nit);
	cout<<objc.getnit()<<","<<objc.getnombres()<<","<<objc.getapellidos()<<endl;
	
};
