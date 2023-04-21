#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	long long num, num2, result=0;
	while(cin>>num>>num2){
		result = abs(num-num2);
		cout <<result<<"\n";
	}
	return 0;
}