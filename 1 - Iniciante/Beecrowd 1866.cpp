#include <iostream>
using namespace std;
int main(){
	int quant, num;
	cin>>quant;
	for (int i=0; i<quant; i++){
	cin>>num;
	if(num%2==0)
	cout<<"0\n";
	else
	cout<<"1\n";
	}
	return 0;
}