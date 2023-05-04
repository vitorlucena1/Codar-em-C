#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
	double num, num2, result1,result2;
	cin>>num>>num2;
	result1=((abs(num-num2))/num)*100;
	cout<<fixed<<setprecision(2)<<result1<<"%\n";	
	
	return 0;
}