#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int quant, codigo, item1 = 1, item2=2, item3=3, item4=4,item5=5;
	float cachorro = 4, salada=4.5, bacon = 5, torrada = 2, refri = 1.5;
	cin >> codigo >> quant;
	if(codigo == item1){
	cachorro*=quant;
	cout <<fixed;
	cout <<"Total: R$ " << setprecision(2)<<cachorro<<"\n";		
	}
	if(codigo == item2){
	salada*=quant;
	cout <<fixed;
	cout <<"Total: R$ " << setprecision(2)<<salada<<"\n";			
	}
	if(codigo == item3){
	bacon*=quant;
	cout <<fixed;
	cout <<"Total: R$ " << setprecision(2)<<bacon<<"\n";	
	}
	if(codigo == item4){
	torrada*=quant;
	cout <<fixed;
	cout <<"Total: R$ " << setprecision(2)<<torrada<<"\n";	
	}
	if(codigo == item5){
	refri*=quant;
	cout <<fixed;
	cout <<"Total: R$ " << setprecision(2)<<refri<<"\n";	
	}
	return 0;
}