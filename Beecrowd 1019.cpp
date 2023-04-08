#include <iostream>

#include <math.h>
using namespace std;

int main(){
	int x1, x2;
	cin >> x1;
	cout <<x1/3600 <<":";
	x2 = (x1%3600);
	cout << x2/60<< ":";
	x2=(x1%60);
	cout << x2/1 <<"\n";
    return 0;
}