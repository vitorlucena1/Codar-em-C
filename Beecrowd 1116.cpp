#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int quant, num, num2;
	float div, numf1,numf2;
	cin >> quant;
	for (int i=0; i<quant; i++){
		cin>>num>>num2;
		numf1=num;
		numf2=num2;
		if(num2==0)
		cout<<"divisao impossivel\n";
		else{
		div = numf1/numf2;
		cout<<fixed;
		cout<<setprecision(1)<<div<<"\n";
		}
	}
	return 0;
}