#include "Paciente.h"
#include <string>

using std::string;

Paciente::Paciente(int cedulaIn, string nombreIn, string sexoIn, int edadIn){

cedula = cedulaIn;
nombre = nombreIn;
sexo = sexoIn;
edad = edadIn;
}
Paciente::~Paciente(){}

int Paciente::getCedula(){

return cedula;

}

string Paciente::getNombre(){

return nombre;

}

string Paciente::getSexo(){

return sexo;

}

int Paciente::getEdad(){

return edad;

}


