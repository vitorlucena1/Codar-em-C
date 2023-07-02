#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int quant, numero, resultado=0;
	char texto[100];
	
	while(cin>>quant){

	if(quant==0)
	break;

	for(int i=0; i<quant; i++){
		cin>>numero;
		scanf(" %[^\n]s", texto);
		if(strcmp(texto,"suco de laranja")==0){
		resultado+=numero*120;
		}
		if(strcmp(texto,"mamao")==0){
		resultado+=numero*85;
		}
		if(strcmp(texto,"morango fresco")==0){
		resultado+=numero*85;
		}
		if(strcmp(texto,"goiaba vermelha")==0){
		resultado+=numero*70;
		}
		if(strcmp(texto,"manga")==0){
		resultado+=numero*56;
		}
		if(strcmp(texto,"laranja")==0){
		resultado+=numero*50;
		}
		if(strcmp(texto,"brocolis")==0){
		resultado+=numero*34;
		}
		
	}

	if(resultado>=110 && resultado<=130)
		cout<<resultado<<" mg\n";
		if(resultado>130){
		cout<<"Menos "<< resultado-130<<" mg\n";
		}
		if(resultado<110)
		cout<<"Mais "<<110-resultado<<" mg\n";

	resultado=0;
	}
	

	return 0;
}
