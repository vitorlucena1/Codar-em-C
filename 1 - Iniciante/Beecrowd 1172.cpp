#include <iostream>
using namespace std;
int main(){
	int num, numeros[10];
	for(int i=0; i<10; i++){
	cin>>num;
	if(num<=0)
	cout<<"X["<<i<<"] = 1\n";
	else
	cout<<"X["<<i<<"] = "<<num<<"\n";
	}
	return 0;
}