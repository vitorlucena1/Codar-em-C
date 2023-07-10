#include <iostream>
using namespace std;
 
void bubble_sort(int vetor[], int tamanho, int cont_ordem, int cont_decrescente){
	int i;
		for(i=0; i<4; i++){
			if(vetor[i]<vetor[i+1]){
			cont_ordem++;
			}

			else if(vetor[i]>vetor[i+1]){
			cont_decrescente++;
            }
        }

if(cont_ordem==tamanho-1)
cout<<"C\n";

else if(cont_decrescente==tamanho-1)
cout<<"D\n";

else
cout<<"N\n";
}

int main(){
 
int numeros[5], cont_ordem=0, cont_decrescente=0;

for(int i=0; i<5; i++){
cin>>numeros[i];
}

bubble_sort(numeros, 5, cont_ordem, cont_decrescente);

return 0;
}
