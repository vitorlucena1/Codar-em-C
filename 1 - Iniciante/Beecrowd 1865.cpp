#include <iostream>
using namespace std;
int main(){
	string nome;
	int quant, forca;
	cin>>quant;
	for (int i=0; i<quant; i++){
		cin>>nome>>forca;
		if(nome == "Thor")
		cout<<"Y\n";
		else
		cout<<"N\n";
	}
}