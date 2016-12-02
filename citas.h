#ifndef CITAS_H
#define CITAS_H

#include <string>
#include <iostream>
using namespace std;

class Citas{

private:
	string dia;
	string descripcion;

public:
	Citas(string diaIn, string descripcionIn);
	~Citas();
	
	string getDia();
	string getDescripcion();

	void setDia(string diaIn);
	void setDescripcion(string descripcionIn);
};
#endif