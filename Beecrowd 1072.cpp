#include <iostream>
using namespace std;
int main(){
	int quant, num, contI=0, contO=0;
	cin >>quant;
	for (int i=0; i<quant; i++){
		cin>>num;
		if(num>=10 && num<=20){
			contI++;
		}
		else{
			contO++;
		}
	}
	cout <<contI<<" in\n";
	cout <<contO<<" out\n";
	return 0;
}