#include "MiClase.h"
#include <iostream>
using namespace std;

MiClase::MiClase(){
	salario = 0;
	codigo = 0;
	nombre = "N/A";
}

MiClase::MiClase(int pCodigo, double pSalario, string pNombre){
	codigo = pCodigo;
	salario = pSalario;
	nombre = pNombre;
}

int MiClase::getCodigo(){
	return codigo;
}
double MiClase::getSalario(){
	return salario;
} 
string MiClase::getNombre(){
	return nombre;
}
void MiClase::setCodigo(int pCodigo){
	codigo = pCodigo;
}
void MiClase::setSalario(double pSalario){
	salario = pSalario;
}
void MiClase::setNombre(string pNombre){
	nombre = pNombre;
}
MiClase::~MiClase(){
	cout<<"El objeto fue destruido"<<endl;
}

