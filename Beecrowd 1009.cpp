#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main(){
	string nome;
	double salario, vendas, result;
	cin >>nome>>salario>>vendas;
	result= 0.15*vendas + salario;
	cout << fixed;
	cout << "TOTAL = R$ "<<setprecision(2) <<result <<"\n";
}