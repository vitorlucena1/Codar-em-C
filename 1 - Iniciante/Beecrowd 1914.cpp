#include <iostream>
#include <string.h>
using namespace std;

int main(){
	string nome;
	char escolha[6];
	string nome2;
	char escolha2[6];
	int quant, num1, num2, resultado=0;
	cin>>quant;

	for(int i=0; i<quant; i++){
	cin>>nome>>escolha>>nome2>>escolha2>>num1>>num2;
	resultado=num1+num2;
	if(resultado%2!=0){
	if(strcmp(escolha, "IMPAR")==0){
	cout<<nome<<"\n";
	}
	else
	cout<<nome2<<"\n";
	}
	else{
	if(strcmp(escolha, "PAR")==0){
	cout<<nome<<"\n";
	}
	else
	cout<<nome2<<"\n";
	}
}
	return 0;
}