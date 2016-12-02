#include "citas.h"

Citas::Citas(string diaIn, string descripcionIn){

	dia = diaIn:
	descripcion = descripcionIn;
}

Citas::~Citas(){}

string Citas::getDia(){
	return dia;
}

string Citas::getDescripcion(){
	return descripcion;
}

void Citas::setDia(string diaIn){
	dia = diaIn;
}

void Citas::setDescripcion(string descripcionIn){
	descripcion = descripcionIn;
}