#include <iostream>
using namespace std;

int main(){
int quant;
float numero, menor_valor;

while(cin>>quant){
	cin>>numero;
	menor_valor=numero;

for(int i=1; i<quant; i++){
	cin>>numero;
    
	if(menor_valor>numero)
	menor_valor=numero;
}
cout<<menor_valor<<endl;
}
	return 0;
}