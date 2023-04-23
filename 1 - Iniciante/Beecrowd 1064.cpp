#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int cont=0;
	float num, med,test;
	for (int i=0; i<6; i++){
		cin>>num;
		if(num>=0){
			cont++;
			test +=num;
		}
	}
	cout <<fixed;
	med=test/cont;
	cout <<cont<<" valores positivos\n";
	cout<<setprecision(1)<<med<<"\n";
	

	return 0;
}