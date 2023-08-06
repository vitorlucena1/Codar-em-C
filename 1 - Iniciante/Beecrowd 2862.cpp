#include <iostream>
using namespace std;

int main(){
int quant, numero;
cin>>quant;

for(int i=0; i<quant; i++){
	cin>>numero;

	if(numero>8000)
	cout<<"Mais de 8000!"<<endl;

	else
	cout<<"Inseto!"<<endl;
}

	return 0;
}