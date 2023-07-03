#include <iostream>
using namespace std;

int main(){
	string texto;
	getline(cin, texto);

	if(texto.length()<=140)
	cout<<"TWEET\n";

	else
	cout<<"MUTE\n";
	
	return 0;
}