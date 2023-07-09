#include <iostream>
using namespace std;
 
int main(){
 
int quant, cont_j=0, joao_1, joao_2, maria_1, maria_2, cont_m=0;
cin>>quant;

for(int i=0; i<quant; i++){

for(int j=0; j<3; j++){
cin>>joao_1>>joao_2;
cont_j+=joao_1*joao_2;
}

for (int j=0; j<3; j++){
cin>>maria_1>>maria_2;
cont_m+=maria_1*maria_2;
}

if(cont_j>cont_m)
cout<<"JOAO\n";

else
cout<<"MARIA\n";

cont_j=0;
cont_m=0;

}

return 0;
}