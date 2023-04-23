#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int quant;
	cin >> quant;
	cout << "1 1 1\n";
	for (int i=2; i<= quant; i++){
		cout <<pow(i, 1)<<" "<<pow(i, 2)<<" "<<pow(i, 3)<<"\n";
	}
	return 0;
}