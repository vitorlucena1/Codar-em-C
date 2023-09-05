#include <iostream>
using namespace std;

int main(){
    string teste, teste1;
    int quant, cont=1;
    cin>>quant;

    for(int i=0; i<quant; i++){
        int pessoas;
        
        cin>>pessoas;
        cin>>teste;

        for(int j=1; j<pessoas; j++){
        teste1=teste;
        cin>>teste;

        if(teste1==teste) cont++;
        }

        if(cont==pessoas) cout<<teste<<endl;
        else cout<<"ingles"<<endl;

        cont=1;
    }

    return 0;
}