#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char palavra[20];
	cin >> palavra;
	if(strlen(palavra)>=10){
		cout <<"palavrao\n";
	}
	else{
		cout <<"palavrinha\n";
	}
	return 0;
}