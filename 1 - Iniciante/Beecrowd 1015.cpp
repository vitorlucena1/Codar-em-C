#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	float x1, y1, x2, y2, result;
	cin >> x1>>y1>>x2>>y2;
	result = sqrt((((x2-x1)*(x2-x1)) + (y2-y1)*(y2-y1)));
	cout << fixed;
	cout << setprecision(4)<<result<< "\n";
	return 0;
}