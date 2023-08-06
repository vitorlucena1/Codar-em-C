#include <iostream>
using namespace std;

int main(){
    string perna;

    while(getline(cin, perna)){

        if(perna.compare("esquerda")==0)
        cout<<"ingles"<<endl;

        if(perna.compare("direita")==0)
        cout<<"frances"<<endl;

        if(perna.compare("nenhuma")==0)
        cout<<"portugues"<<endl;
    
        if(perna.compare("as duas")==0)
        cout<<"caiu"<<endl;
    }

return 0;
}