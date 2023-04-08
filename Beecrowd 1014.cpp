#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double comb, result;
	int dist;
	cin >> dist>>comb;
	result = dist/comb;
	cout << fixed;
	cout << setprecision(3)<<result<< " km/l"  << "\n";
	return 0;
}