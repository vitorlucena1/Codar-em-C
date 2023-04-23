#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int teste, quant, contC=0, contR=0, contS=0, total;
	float per_coelho, per_ratos, per_sapos;
	char animal;
	cin >> teste;
	for (int i=0; i<teste; i++){
		cin >>quant>>animal;
		if(animal == 'C'){
			contC+=quant;
		}
		else if(animal == 'R'){
			contR+=quant;
		}
		else if(animal == 'S'){
			contS+=quant;
		}
	}
	total = contC + contR + contS;
	per_coelho = (float) contC / total * 100;
	per_ratos = (float) contR / total * 100;
	per_sapos = (float) contS / total * 100;
	cout <<"Total: "<<total <<" cobaias\n";
	cout <<"Total de coelhos: "<<contC <<"\n";
	cout <<"Total de ratos: "<<contR <<"\n";
	cout <<"Total de sapos: "<<contS <<"\n";
	cout <<fixed;
	cout <<"Percentual de coelhos: "<<setprecision(2)<<per_coelho<<" %\n";
	cout <<"Percentual de ratos: "<<setprecision(2)<<per_ratos<<" %\n";
	cout <<"Percentual de sapos: "<<setprecision(2)<<per_sapos<<" %\n";
	return 0;

}