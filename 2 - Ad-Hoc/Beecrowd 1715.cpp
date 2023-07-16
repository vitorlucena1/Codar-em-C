#include <iostream>
using namespace std;
 
int main(){
    
int jogadores, partida, cont1=0, cont2=0;
cin>>jogadores>>partida;

for(int i=0; i<jogadores; i++){
int teste[partida];

for(int j=0; j<partida; j++){
cin>>teste[j];

if(teste[j]!=0)
   cont1++;

if(cont1==partida)
   cont2++;

}
cont1=0;
}

cout<<cont2<<"\n";

return 0;
}