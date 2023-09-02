#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int quant, cont=1;
    cin>>quant;
    string fruta;
    double preco, resultado=0, total_frutas=0;
    int dias[quant];
    
    for(int i=0; i<quant; i++){
        cin>>preco;
        resultado+=preco;
        cin.ignore();
        getline(cin, fruta);

        for(char c : fruta) {
            if (c == ' ') {
                cont++;
            }
        } 

        dias[i]=cont;
        total_frutas+=cont;
        cont=1;
    }

    for(int i=0; i<quant; i++){
        cout<<"day "<<i+1<<": "<< dias[i]<< " kg"<<endl;
    }

    cout<<fixed<<setprecision(2)<<total_frutas/quant<<" kg by day"<<endl;
    cout<<fixed<<setprecision(2)<<"R$ "<<resultado/quant<<" by day"<<endl;

    return 0;
}