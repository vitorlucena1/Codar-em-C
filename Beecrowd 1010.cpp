#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int codigo_pecas1,codigo_pecas2 ,num_pecas1, num_pecas2;
	double valor_unit1, valor_unit2, result;
	cin >>codigo_pecas1>>num_pecas1>>valor_unit1>>codigo_pecas2>>num_pecas2>>valor_unit2;
	result = num_pecas1*valor_unit1 + num_pecas2*valor_unit2;
	cout << fixed;
	cout << "VALOR A PAGAR: R$ "<<setprecision(2) <<result <<"\n";
	return 0;
}