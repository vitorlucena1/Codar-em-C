#include <iostream>
using namespace std;

int main(){
	unsigned long long numero;
	while(cin>>numero){
	if(numero==-1)
	break;

	if(numero==0)
	cout<<"0\n";

	else{
	numero-=1;
	cout<<numero<<"\n";
	}
	}
	
	return 0;
}