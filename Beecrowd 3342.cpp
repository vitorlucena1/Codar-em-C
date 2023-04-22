#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int tam, teste=0, teste2=0;
	cin>>tam;
	if(tam%2!=0){
		teste = ((tam*tam)/2)+1;
		teste2=abs(tam*tam-teste);
		cout<<teste <<" casas brancas e "<<teste2<<" casas pretas\n";
	}
	else{
		cout<<tam*tam/2 <<" casas brancas e "<<tam*tam/2 <<" casas pretas\n";
	}
}