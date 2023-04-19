#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int quant;
	float nota1, nota2, nota3, med; 
	cin >> quant;
	for (int i=0; i<quant; i++){
	cin >> nota1 >> nota2 >> nota3;
	med = ((nota1*2) +(nota2*3)+(nota3*5))/10.0;
	cout << fixed;
	cout << setprecision(1) << med << "\n";
	}
	return 0;
}