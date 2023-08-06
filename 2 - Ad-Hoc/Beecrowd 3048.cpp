#include <iostream>
using namespace std;

int main() {
string teste;
int quant, cont=0;

cin>>quant;

for(int i=0;i<quant; i++){
    cin>>teste[i];
}

for(int j=0; j<quant; j++){
    
    if(teste[j]!=teste[j+1])
    cont++;
    }

cout<<cont<<endl;

return 0;
}