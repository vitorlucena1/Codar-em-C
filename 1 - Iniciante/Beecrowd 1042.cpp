#include <iostream>
using namespace std;

void bubble_sort(int vetor[], int tamanho){
	int aux, i, j;
	for(j=tamanho-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                    vetor[i]=vetor[i+1];
                    vetor[i+1]=aux;
            }
        }
    }
}
int main(){
	int vetor[3], vetor2[3];
	for (int i=0; i<3; i++){
		cin>>vetor[i];
		vetor2[i]=vetor[i];
	}
	
	bubble_sort(vetor, 3);
	for (int i=0; i<3; i++){
		cout<<vetor[i]<<"\n";
	}
	cout<<"\n";
	for (int i=0; i<3; i++){
		cout<<vetor2[i]<<"\n";
	}
}