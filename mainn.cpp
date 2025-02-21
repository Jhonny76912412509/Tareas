#include "Clienten.cpp"
#include<iostream>

using namespace std;

main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"ingresar Nit: ";
	cin>>nit;
	cout<<"ingresar Nombres: ";
	cin>>nombres;
	cout<<"ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"ingresar Direccion: ";
	cin>>direccion;
	cout<<"ingresar Telefono: ";
	cin>>telefono;
	
	//instancia de un objeto
	Clienten obj = Clienten(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();

	//cout<<"Datos del Cliente"<<obj.getNit()<<","obj.setNombres()<<","obj.setApellidos()<<","obj.setDireccion()<<","obj.setTelefono()<<endl;
/*	Clienten obj = Clienten(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	cout<<"ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();*/
	
/*	Clienten obj = Clienten();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();
	*/
}
