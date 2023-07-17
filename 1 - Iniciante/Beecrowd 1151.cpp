#include <iostream>
using namespace std;

void fibonacci(int n){
long int a=1, b=0, fib;

cout<<"0 ";

for(int i=1;i<n;i++){
	fib=a+b;
	a=b;
	b=fib;

	if(i+1==n)
	cout<<fib;
	
	else
	cout<<fib<<" ";
}
cout<<"\n";
}

int main(){
int num;
cin>>num;

fibonacci(num);

return 0;
}