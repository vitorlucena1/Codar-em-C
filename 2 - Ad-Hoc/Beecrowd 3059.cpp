#include <iostream>
using namespace std;
 
void checa_soma(int vetor[], int tamanho, int minimo, int maximo, int cont){
	int aux, i, j;
	for(j=0; j<tamanho; j++){
		for(i=j+1; i<=tamanho; i++){
			aux=vetor[j] + vetor[i];

			if((aux>= minimo) && (aux<= maximo)){
			cont++;
            }
        }
    }
cout<<cont<<"\n";
}

int main(){
 
int tam, minimo, maximo, cont=0;
cin>>tam>>minimo>>maximo;
int numeros[tam];

for(int i=0; i<tam; i++){
cin>>numeros[i];
}

checa_soma(numeros, tam, minimo, maximo, cont);

return 0;
}