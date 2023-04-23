#include <iostream>
using namespace std;
int main(){
	int lado1, lado2, terreno2=0, lado3, lado4, terreno1=0;
	for (int i=0; i<4; i++){
		cin >> lado1>>lado2;
		terreno1+=(lado1*lado2);
	}
	for(int i=0; i<4; i++){
		cin>>lado3>>lado4;
		terreno2+=(lado3*lado4);
	}
	if(terreno1>terreno2)
	cout<<"terreno A\n";
	else if(terreno1<terreno2)
	cout<<"terreno B\n";
	else if(terreno1==terreno2)
	cout<<"terreno B\n";
	return 0;
}