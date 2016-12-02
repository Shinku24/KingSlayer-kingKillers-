#ifndef ENFERMEDADES_H
#define ENFERMEDADES_H

#include <string>
#include <iostream>
using namespace std;

class Enfermedades{
private:
	string nombre;
	string descripcion;

public:
	Enfermedades(string nombreIn,string descripcionIn);
	~Enfermedades();
	
	string getNombre();
	string getDescripcion();

	void setNombre(string nombreIn);
	void setDescripcion(string descripcionIn);
};

#endif