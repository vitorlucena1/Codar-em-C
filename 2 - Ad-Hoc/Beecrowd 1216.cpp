#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nome;
    double resultado, distancia, cont=0;

    while(getline(cin, nome)){
        cin>>distancia;
        resultado+=distancia;
        cont++;
        cin.ignore();
    }
    
    cout<<fixed<<setprecision(1)<<resultado/cont<<endl;

    return 0;
}