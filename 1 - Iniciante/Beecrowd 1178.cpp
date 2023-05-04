#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double num;
	cin>>num;
	for(int i=0; i<100; i++){
	cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<num<<"\n";
	num/=2;
	}
	return 0;
}