#include "enfermedades.h"

Enfermedades::Enfermedades(string nombreIn, string descripcionIn){

	nombre = nombreIn;
	descripcion = descripcionIn;
}

Enfermedades::~Enfermedades(){}

 string Enfermedades::getNombre(){

	return nombre;
}

string Enfermedades::getDescripcion(){
	return descripcion;
}


void Enfermedades::setNombre(string nombreIn){
	nombre = nombreIn;
}

void Enfermedades::setDescripcion(string descripcionIn){
	descripcion = descripcionIn;
}


