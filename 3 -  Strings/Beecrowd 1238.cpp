#include <iostream>
using namespace std;

int main(){
    int quant;
    cin>>quant;

    for(int i=0; i<quant; i++){
        string texto1, texto2;
        cin>>texto1>>texto2;
        int tam1=texto1.length(), tam2=texto2.length();

        if(tam1>tam2){
        for(int j=0; j<tam1; j++){
            
            if(tam2>j)
            cout<<texto1[j]<<texto2[j];

            else
            cout<<texto1[j];
        }
        }

        else{
            for(int j=0; j<tam2; j++){

            if(tam1>j)
            cout<<texto1[j]<<texto2[j];
            
            else
            cout<<texto2[j];
        }
        }
        cout<<endl;
    }
return 0;
}