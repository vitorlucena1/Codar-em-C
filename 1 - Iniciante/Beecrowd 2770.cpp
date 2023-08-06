#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    unsigned tam1, tam2, tam3, tam4, quant, i;

    while(cin>>tam1>>tam2>>quant){
        
        for(i=0; i<quant; i++){
        cin>>tam3>>tam4;

        if((tam3<=tam1 && tam4<=tam2) || (tam3<=tam2 && tam4<=tam1))
        cout<<"Sim"<<endl;

        else
        cout<<"Nao"<<endl;
    }   
}
return 0;
}