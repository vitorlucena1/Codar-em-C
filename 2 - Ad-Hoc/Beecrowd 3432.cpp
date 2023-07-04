#include <iostream>
using namespace std;

int main(){
	int num, cont=0;

	for(int i=0; i<8; i++){
		cin>>num;
		if(num==9)
		cont++;
	}

	if(cont!=0)
	cout<<"F\n";
	
	else
	cout<<"S\n";

	return 0;
}