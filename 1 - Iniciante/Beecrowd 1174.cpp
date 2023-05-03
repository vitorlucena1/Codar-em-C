#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double num, numeros[100];
	for(int i=0; i<100; i++){
	cin>>num;
	if(num<=10)
	cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<num<<"\n";
	}
	return 0;
}