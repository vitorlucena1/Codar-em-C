#include <iostream>
using namespace std;

int main(){
	int alunos, matricula, guarda_matricula, cont=0;
	double notas, maior_nota=0;
	cin>>alunos;
	for(int i=0; i<alunos; i++){
		cin>>matricula>>notas;
		if(notas>=8.0){
		if(maior_nota<notas){
		maior_nota=notas;
		guarda_matricula=matricula;
		cont++;
		}
		}
	}
	
	if(cont!=0)
	cout<<guarda_matricula<<"\n";
	
	else
	cout<<"Minimum note not reached\n";
	
	
	return 0;
}