#include <iostream>
using namespace std;

int main(){
    int numero;
    while(cin>>numero){

        if((numero>=0 && numero<=89)|| numero==360)
        cout<<"Bom Dia!!\n";

        else if(numero>=90 && numero<=179)
        cout<<"Boa Tarde!!\n";

        else if(numero>=180 && numero<=269)
        cout<<"Boa Noite!!\n";

        else if(numero>=270 && numero<=359)
        cout<<"De Madrugada!!\n";
    }
    return 0;
}