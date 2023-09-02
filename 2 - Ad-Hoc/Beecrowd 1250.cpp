#include <iostream>
using namespace std;

int main(){
    int quant, vezes, cont=0;
    cin>>quant;
    
    for(int i=0; i<quant; i++){
        cin>>vezes;

        int altura[vezes];
        for(int j=0; j<vezes;j++){
            cin>>altura[j];
        }

        char saltos[vezes];
        for(int j=0; j<vezes;j++){
            cin>>saltos[j];
        }

        for(int j=0; j<vezes; j++){
            if((altura[j]>2 && saltos[j]=='J') || (altura[j]<=2 && saltos[j]=='S')) cont++;
        }

        cout<<cont<<endl;
        cont=0;
    }

    return 0;
}