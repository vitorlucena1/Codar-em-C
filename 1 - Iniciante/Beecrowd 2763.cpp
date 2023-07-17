#include <iostream>
using namespace std;

int main(){
char cpf[14];
cin>>cpf;

for(int i=0; i<14; i++){
	if(cpf[i]=='.' || cpf[i]=='-')
	cout<<"\n";

	else
	cout<<cpf[i];
}
cout<<"\n";
return 0;
}