#include <iostream>
using namespace std;
int main(){
	int senha;
	cin>>senha;
	while(senha!=2002){
		cout<<"Senha Invalida\n";
		cin>>senha;
		if(senha==2002){
			cout<<"Acesso Permitido\n";
			break;
		}
	}
	
	return 0;
}