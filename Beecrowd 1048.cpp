#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float salario, novo_salario, reajuste;
	cin >> salario;
	if(salario >= 0 && salario <= 400.00){
		novo_salario = salario * 1.15;
		reajuste = salario * 0.15;
		cout <<fixed;
		cout <<"Novo salario: " << setprecision(2)<<novo_salario<< "\n";
		cout <<"Reajuste ganho: " << setprecision(2)<<reajuste <<"\n";
		cout <<"Em percentual: 15 %\n";
	}
		else if(salario >= 400.01 && salario <= 800.00){
		novo_salario = salario * 1.12;
		reajuste = salario * 0.12;
		cout <<fixed;
		cout <<"Novo salario: " << setprecision(2)<<novo_salario<< "\n";
		cout <<"Reajuste ganho: " << setprecision(2)<<reajuste <<"\n";
		cout <<"Em percentual: 12 %\n";
	}
		else if(salario >= 800.01 && salario <= 1200.00){
		novo_salario = salario * 1.10;
		reajuste = salario * 0.10;
		cout <<fixed;
		cout <<"Novo salario: " << setprecision(2)<<novo_salario<< "\n";
		cout <<"Reajuste ganho: " << setprecision(2)<<reajuste <<"\n";
		cout <<"Em percentual: 10 %\n";
	}
		else if(salario >= 1200.01 && salario <= 2000.00){
		novo_salario = salario * 1.07;
		reajuste = salario * 0.07;
		cout <<fixed;
		cout <<"Novo salario: " << setprecision(2)<<novo_salario<< "\n";
		cout <<"Reajuste ganho: " << setprecision(2)<<reajuste <<"\n";
		cout <<"Em percentual: 7 %\n";
	}
		else if(salario >= 2000.01){
		novo_salario = salario * 1.04;
		reajuste = salario * 0.04;
		cout <<fixed;
		cout <<"Novo salario: " << setprecision(2)<<novo_salario<< "\n";
		cout <<"Reajuste ganho: " << setprecision(2)<<reajuste <<"\n";
		cout <<"Em percentual: 4 %\n";
	}
    return 0;
}