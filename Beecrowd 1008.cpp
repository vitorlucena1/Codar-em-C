#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int numero, horas;
	double pag, result;
	cin >> numero>>horas>>pag;
	result= horas * pag;
	cout << "NUMBER = "<<numero <<"\n";
	cout << fixed;
	cout << "SALARY = U$ " << setprecision(2)<<result << "\n";
	return 0;
}