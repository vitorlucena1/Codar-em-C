#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double num, num2, result;
	cin>>num>>num2;
	result = (num*num2)/2;
	cout<<"Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = "<<fixed<<setprecision(5)<<result<<".\n";
	
	return 0;
}