#include <iostream>
using namespace std;
int main(){
	int bolinha=0, galho=0, result=0;
	cin>>bolinha>>galho;
	galho/=2;
	result=galho-bolinha;
	if(bolinha>galho)
	cout<<"Amelia tem todas bolinhas!\n";
	else if(result==0)
	cout<<"Amelia tem todas bolinhas!\n";
	else
	cout<<"Faltam "<<result<<" bolinha(s)\n";

}