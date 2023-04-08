#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double volume, pi = 3.14159;
	int raio;
	cin >> raio;
	volume = (4/3.0)*pi*raio*raio*raio;
	cout << fixed;
	cout << "VOLUME = " << setprecision(3)<<volume << "\n";
	return 0;
}