#ifndef MiClase_H
#define MiClase_H

#include <string>
using namespace std;
class MiClase{
	private:
		int codigo;
		double salario;
		string nombre;
	
	public:
		MiClase(int,double,string);
		MiClase();

		int getCodigo();
		double getSalario();
		string getNombre();

		void setCodigo(int pCodigo);
		void setSalario(double);
		void setNombre(string);

		~MiClase();
};


#endif
