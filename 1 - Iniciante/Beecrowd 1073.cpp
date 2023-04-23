#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int num, result;
	cin >> num;
	for (int i=2; i<=num; i++){
		if (i%2==0){
			result = pow(i,2);
			cout <<i<<"^2 = "<<result<<"\n";
		}
	}
	
	return 0;
}