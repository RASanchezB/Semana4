#include <iostream>
#include <fstream>
using namespace std;

char** create(int);
void deletematrix(char**,int);
void printmatrix(char**,int);
bool salir(char**,int,int,int);
int main(){
	ifstream file("laberinto.txt");
	int size = 0;
	char** labmat = NULL;
	if(file.is_open()){
		file>>size;
		labmat = create(size);
		for(int i=0;i<size;i++){
			for(int j=0;j<size;j++){
				file >> labmat[i][j];
			}
		}
		file.close();
		salir(labmat,size,1,0);
		printmatrix(labmat,size);
		deletematrix(labmat,size);
	}
	return 0;
}

void deletematrix(char** mat, int size){
	for(int i=0;i<size;i++){
		delete[]mat[i];
		mat[i] = NULL;
	}
	delete[]mat;
}

void printmatrix(char** mat, int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<" "<<mat[i][j];
		}
		cout<<endl;
	}
}

char** create(int n){
	char** retval = new char*[n];
	for(int i=0;i<n;i++)
		retval[i] = new char[n];

	return retval;
}

bool salir(char** mat, int size ,int i, int j){
	bool salio=false;
	printmatrix(mat,size);
	cin.ignore();
	if(j == size-1){
		mat[i][j] = '@';
		salio =true;
		cout<<"Salio!!"<<endl;
	}else{
		mat[i][j] = '*';
		if(!salio && mat[i-1][j] == '.'){
			salio = salir(mat,size,i-1,j);
		}

		if(!salio && mat[i][j+1] == '.'){
		
			salio = salir(mat,size,i,j+1);
		}

		if(!salio && mat[i+1][j] == '.'){
			salio  = salir(mat,size,i+1,j);
		}

		if(!salio && mat[i][j-1] == '.'){
			salio = salir(mat,size,i,j-1);
		}

		if(salio){
			mat[i][j] = '@';
		}
	}
	return salio;
}	

