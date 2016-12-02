#ifndef HISTORIA_H
#define HISTORIA_H

#include <string>
using std::string;

#include "enfermedades.h"
#include "citas.h"
#include "medicamento.h"

class Historia{

private:

	Enfermedades * objEnfermedades;
	Citas * objCitas;
	Medicamentos * objMedicamentos;


public:
	Historia(string nombreEN, string descripcionEN, string diaCI, string descripcionCI, string nombreME, int dosisME);
	~Historia();
	
	//Enfermedades
	string getNombreEnfermedades();
	string getDescripcionEnfermedades();

	void setNombreEnfermedades(string nombreIn);
	void setDescripcionEnfermedades(string descripcionIn);


	//Citas
	string getDiaCitas();
	string getDescripcionCitas();

	void setDiaCitas(string diaIn);
	void setDescripcionCitas(string descripcionIn);

	//Medicamentos

	string getNombreMedicamentos();
	int getDosisMedicamentos();

	void setNombreMedicamentos(string nombreIn);
	void setDosisMedicamentos(int dosisIn);
};
#endif
