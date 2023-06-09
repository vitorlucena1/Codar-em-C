#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int cont=0;
	int aposta[11], sorteado[11];
	for(int i=0; i<6; i++){
		cin>>aposta[i];
	}
		for(int i=0; i<6; i++){
		cin>>sorteado[i];
	}
	for (int i=0; i<6; i++){
		for(int j=0;j<11;j++){
			if(sorteado[i]==aposta[j]){
			cont++;
			}
		}
	}

	if(cont==3)
	cout<<"terno\n";
	
	if(cont==4)
	cout<<"quadra\n";
	
	if(cont==5)
	cout<<"quina\n";
	
	if(cont==6)
	cout<<"sena\n";
	
	if(cont<3)
	cout<<"azar\n";
	
	return 0;
}