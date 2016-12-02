#ifndef MEDICAMENTOS_H
#define MEDICAMENTOS_H

#include <string>
#include <iostream>
using namespace std;

class Medicamentos{

private:
	string nombre;
	int dosis;

public:
	Medicamentos(string nombreIn, int dosisIn);
	~Medicamentos();
	
	string getNombre();
	int getDosis();

	void setNombre(string nombreIn);
	void setDosis(int dosisIn);
};
#endif