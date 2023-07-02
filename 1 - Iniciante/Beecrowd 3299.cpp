#include <iostream>
#include <string.h>
using namespace std;

int main(){
int teste=0;
string numero;
cin>>numero;
for(unsigned long long i=0; i<numero.length(); i++){
	if(numero[i]=='1' && numero[i+1]=='3'){
	cout<<numero<<" es de Mala Suerte\n";
	teste=1;
	break;
	}
}

if(teste==0)
cout<<numero<<" NO es de Mala Suerte\n";

return 0;
}
