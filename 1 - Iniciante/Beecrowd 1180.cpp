#include <iostream>
using namespace std;
int main(){
	int quant, cont=0;
	cin>>quant;
	int num[quant];
	for(int i=0; i<quant; i++){
	cin>>num[i];
	}

	for (int i=0; i<quant; i++){
		for(int j=0; j<quant; j++){
		if(num[i]<num[j]){
		cont++;
		}	
		}
		if(cont==quant-1){
		cout<<"Menor valor: "<< num[i]<<"\n";
		cout<<"Posicao: "<<i<<"\n";	
		}
		cont=0;
	}
	
	return 0;
}