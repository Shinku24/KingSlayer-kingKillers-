/*
  Asignatura: PROGRAMACIÓN ORIENTADA A OBJETOS (IPOO) 750081M
  Archivo: Clave.h
  Fecha creación: 14 - Noviembre - 2016
  Fecha última modificación: 14 - Noviembre - 2016
  Autor: Juan felipe gil
*/
#ifndef MAIN_H
#define MAIN_H

#include <string>
using std::string;

bool isText(string textIn);
void insertarTexto(string textoCout, string &texto);
bool isInt(string textIn);
void insertarNumero(string textoCout, string &texto);
int convertirStr(const string &Text);

#endif
