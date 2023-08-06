#include <iostream>
using namespace std;

int main(){
string texto;

while(getline(cin, texto)){

    for(int i=0; i<texto.length(); i++){

    if(texto[i]==' ' &&(texto[i+1]==',' || texto[i+1]=='.')){
    cout<<texto[i+1];
    i++;
    }

    else
    cout<<texto[i];
    }
    
    cout<<endl;

}
    return 0;
}