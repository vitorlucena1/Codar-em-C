#include <iostream>
using namespace std;
unsigned long long int fibonacci(unsigned long long int n){
unsigned long long int a=1,b=0,fib;
for (int i=1;i<=n;i++){
fib=a+b;
a=b;
b=fib;
}
return fib;
}
int main(){
	int quant, num;
	cin>>quant;
	for(int i=0; i<quant; i++){
		cin>>num;
		if(num==0)
		cout<<"Fib(0) = 0\n";
		else
		cout<<"Fib("<<num<<") = "<<fibonacci(num)<<"\n";
	}
}