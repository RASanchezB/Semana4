#include "MiClase.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	MiClase* objeto = new MiClase(1,0000,"Juan Pueblo");
	
	cout<<"Nombre: "<<objeto->getNombre()<<endl;

	cout<<(*objeto).getNombre();

	MiClase objeto2(2,9000,"Pedro Paramo");
	MiClase& referencia = objeto2;

	cout<<"Salario: "<<referencia.getSalario()<<endl;
	cout<<"Referencia: "<<&objeto2<<endl;
	
	delete objeto;
	//return 0;
}
