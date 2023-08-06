#include <iostream>
using namespace std;

int main(){
int quant, gastoG=0, gastoV=0, numero;
cin>>quant;

for(int i=0; i<quant; i++){
	char letra;
	cin>>letra;

	if(letra=='G'){
	cin>>numero;
	gastoG+=numero;
	}

	else{
	cin>>numero;
	gastoV+=numero;
	}

	}

	if(gastoG>gastoV)
	cout<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
    
	else
	cout<<"A greve vai parar."<<endl;
	
return 0;
}