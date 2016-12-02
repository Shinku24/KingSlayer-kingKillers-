#include "medicamentos.h"

Medicamentos::Medicamentos(string nombreIn, int dosisIn){

	nombre = nombreIn;
	dosis = dosisIn;
}

Medicamentos::~Medicamentos(){}

string Medicamentos::getNombre(){
	return nombre;
}

int Medicamentos::getDosis(){
	return dosis;
}

void Medicamentos::setNombre(string nombreIn){
	nombre = nombreIn;
}

void Medicamentos::setDosis(int dosisIn){
	dosis = dosisIn;
}