#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string nome;
	int tam;
	getline(cin, nome);
	tam=nome.length();
	if(tam<=80)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}