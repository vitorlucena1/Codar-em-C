#include <iostream>
using namespace std;

int main(){
int dias;
int saldo_inicial, menor_saldo, operacao;

cin>>dias>>saldo_inicial;

menor_saldo = saldo_inicial;

for(int i=0; i<dias; i++){

	cin>>operacao;

	saldo_inicial += operacao;

	if(saldo_inicial < menor_saldo)
	menor_saldo = saldo_inicial;
	}

cout<<menor_saldo<<"\n";

return 0;
}