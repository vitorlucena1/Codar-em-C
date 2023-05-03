#include <iostream>
using namespace std;
int main(){
	int num, numeros[10];
	cin>>num;
	cout<<"N[0] = "<<num<<"\n"; 
	for(int i=1; i<10; i++){
	cout<<"N["<<i<<"] = ";
	num*=2;
	cout<<num<<"\n";
	}
	return 0;
}