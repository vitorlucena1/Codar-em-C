#include <iostream>
using namespace std;

int main(){
    int vetor_par[5], vetor_impar[5], valor, tamanho_vetor_par=0, tamanho_vetor_impar=0;

    for(int i=0; i<15; i++){
        cin>>valor;
        
        if(valor%2==0  && tamanho_vetor_par<5){
            vetor_par[tamanho_vetor_par]=valor;
            tamanho_vetor_par++;
        }

        if(tamanho_vetor_par==5){
            for(int i=0; i<5; i++){
                cout<<"par["<<i<<"] = "<<vetor_par[i]<<endl;
            }
            vetor_par[0]=NULL;
            tamanho_vetor_par=0;
        }

        if(valor%2!=0 && tamanho_vetor_impar<5){
            vetor_impar[tamanho_vetor_impar]=valor;
            tamanho_vetor_impar++;
        }

        if(tamanho_vetor_impar==5){
            for(int i=0; i<5; i++){
                cout<<"impar["<<i<<"] = "<<vetor_impar[i]<<endl;
            }
            vetor_impar[0]=NULL;
            tamanho_vetor_impar=0;
        }

    }

    if(vetor_impar[0]!=NULL){
        if(tamanho_vetor_impar==0){
            cout<<vetor_impar[0];
        }

        else{
            for(int i=0; i<tamanho_vetor_impar; i++){
                cout<<"impar["<<i<<"] = "<<vetor_impar[i]<<endl;
            }
        }
    }

    if(vetor_par[0]!=NULL){
        if(tamanho_vetor_par==0){
            cout<<vetor_par[0];
        }

        else{
            for(int i=0; i<tamanho_vetor_par; i++){
                cout<<"par["<<i<<"] = "<<vetor_par[i]<<endl;
            }
        }
    }

    return 0;
}