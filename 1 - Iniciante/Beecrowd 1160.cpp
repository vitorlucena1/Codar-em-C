#include <iostream>
using namespace std;

int main(){
int quant, cont=0;
long int PA, PB;
double G1, G2;
cin>>quant;

for(int i=0; i<quant; i++){
cin>>PA>>PB>>G1>>G2;

	while(PA<=PB){
	PA+=(PA*G1)/100;
	PB+=(PB*G2)/100;
	cont++;

	if(cont>100)
	break;
}

if(cont>100)
cout<<"Mais de 1 seculo.\n";

else
cout<<cont<<" anos.\n";

cont=0;
}

return 0;
}