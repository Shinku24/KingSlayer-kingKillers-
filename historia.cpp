#include "historia.h"

Historia::Historia(string nombreEN, string descripcionEN, string diaCI, string descripcionCI, string nombreME, int dosisME){

	objEnfermedades = new Enfermedades(nombreEN, descripcionEN);
	objCitas = new Citas(diaCI, descripcionCI);
	objMedicamentos = new Medicamentos(nombreME, dosisME);
}

Historia::~Historia(){
	delete objEnfermedades;
	delete objCitas;
	delete objMedicamentos;
}

//Enfermedades
	string Historia::getNombreEnfermedades(){
		return objEnfermedades->getNombre();
	}
	string Historia::getDescripcionEnfermedades(){
		return objEnfermedades->getDescripcion();
	}

	void Historia::setNombreEnfermedades(string nombreIn){
		objEnfermedades->setNombre(nombreIn);
	}
	void Historia::setDescripcionEnfermedades(string descripcionIn){
		objEnfermedades->setDescripcion(descripcionIn);
	}


	//Citas
	string Historia::getDiaCitas(){
		return objCitas->getDia();
	}
	string Historia::getDescripcionCitas(){
		return objCitas->getDescripcion();
	}

	void Historia::setDiaCitas(string diaIn){
		objCitas->setDia(diaIn);
	}
	void Historia::setDescripcionCitas(string descripcionIn){
		objCitas->setDescripcion(descripcionIn);
	}

	//Medicamentos

	string Historia::getNombreMedicamentos(){
		return objMedicamentos->getNombre();
	}

	int Historia::getDosisMedicamentos(){
		return objMedicamentos->getDosis();
	}

	void Historia::setNombreMedicamentos(string nombreIn){
		objMedicamentos->setNombre(nombreIn);
	}

	void Historia::setDosisMedicamentos(int dosisIn){
		objMedicamentos->setDosis(dosisIn);
	}