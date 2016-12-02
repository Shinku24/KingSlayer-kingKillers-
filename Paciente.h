#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>

using std::string;

class Paciente{

private:

int cedula;
string nombre;
string sexo;
int edad;


public:

Paciente(int cedulaIn, string nombreIn, string sexoIn, int edadIn);
~Paciente();

int getCedula();
string getNombre();
string getSexo();
int getEdad();




};
#endif
