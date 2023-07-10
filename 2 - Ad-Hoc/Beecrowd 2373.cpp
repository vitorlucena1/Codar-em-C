#include <iostream>
using namespace std;

int main(){
	int quant, latas, copos, cont=0;
	cin>>quant;

	for(int i=0; i<quant; i++){
	cin>>latas>>copos;

	if(copos<latas)
	cont+=copos;
	}

	cout<<cont<<"\n";

	return 0;
}