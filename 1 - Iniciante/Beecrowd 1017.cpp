#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int tempo, vel;
	float litros;
	cin >> tempo>>vel;
	litros = (vel*tempo)/12.0;
	cout << fixed;
	cout << setprecision(3) << litros <<"\n";

	return 0;
	
}