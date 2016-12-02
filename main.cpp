/*
  Asignatura: PROGRAMACIÓN ORIENTADA A OBJETOS (IPOO) 750081M
  Archivo: main.cpp
  Fecha creación: 20 - Octubre - 2016
  Fecha última modificación: 20 - Octubre - 2016
  Autor: Carlos Andres Delgado
*/

#include <iostream>
#include <string>
#include <sstream>
#include "main.h"

using namespace std;

bool isText(string textIn){
	bool valido= true;
    for(unsigned int i=0; i<textIn.size(); i++){
		if(textIn[i]>=48 && textIn[i]<=57){
			valido = false;
			i= textIn.size();
		}		
    }
    
    return valido;
}

void insertarTexto(string textoCout, string &texto){
	bool condicion= false;
	while(!condicion){
		cout << textoCout+": ";
		cin >> texto;
		condicion = isText(texto);
		if(!condicion){
			cout << "Entrada invalida\n";
		}
	}
}

bool isInt(string textIn){
	bool valido= true;
    for(unsigned int i=0; i<textIn.size(); i++){
		if(!(textIn[i]>=48 && textIn[i]<=57)){
			valido = false;
			i= textIn.size();
		}		
    }
    
    return valido;
}

void insertarNumero(string textoCout, string &texto){
	bool condicion= false;
	while(!condicion){
		cout << textoCout+": ";
		cin >> texto;
		condicion = isInt(texto);
		if(!condicion){
			cout << "Entrada invalida\n";
		}
	}
}

int convertirStr(const string &Text){
	stringstream ss(Text);
	int result;
	return ss >> result ? result : 0;
}

int main(int argc, char * argv[]){
	string text;
	
	int cedula;
	string nombre;
	string sexo;
	int edad;
	
	string enfermedadesN;
	string enfermedadesD;
	
	string citaDia;	
	string citaD;
	
	string medicamentosN;
	int medicamentoNumD;
	
	insertarNumero("Cedula", text);
	cedula = convertirStr(text);
	insertarTexto("Nombre", text);
	nombre = text;
	insertarTexto("Sexo", text);
	sexo = text;
	insertarNumero("Edad", text);
	edad = convertirStr(text);
	
	insertarTexto("Nombre de las Enfermedades Diagnosticadas", text);
	enfermedadesN = text;
	insertarTexto("Descripcion de las Enfermedades Diagnosticadas", text);
	enfermedadesD = text;
	
	cout << "Dia de las Citas Medicas: ";
	cin >> citaDia;
	insertarTexto("Descripcion de las Citas Medicas", text);
	enfermedadesD = text;
	
	insertarTexto("Nombre de los Medicamentos", text);
	medicamentosN = text;
	insertarNumero("Numero de Dosis de Medicamentos", text);
	medicamentoNumD = convertirStr(text);	

}
