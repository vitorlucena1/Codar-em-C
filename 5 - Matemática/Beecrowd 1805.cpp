#include <iostream>
using namespace std;

int main(){
	unsigned long long num1, num2, resultado;
	cin>>num1>>num2;

    resultado=((num1+num2)*(num2-num1+1))/2;
    
    cout<<resultado<<endl;

	return 0;
}