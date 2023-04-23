#include <iostream>
using namespace std;
int main(){
	int combustivel, contA=0, contG=0, contD=0;
	cin >> combustivel;
	while(combustivel >= 1 || combustivel <= 4){
		cin >> combustivel;
		if(combustivel ==1)
		contA++;
		else if(combustivel ==2)
		contG++;
		else if(combustivel ==3)
		contD++;
		else if(combustivel ==4)
		break;
	}
	cout <<"MUITO OBRIGADO\n";
	cout <<"Alcool: "<<contA<<"\n";
	cout <<"Gasolina: "<<contG<<"\n";
	cout<<"Diesel: "<<contD<<"\n";
	return 0;
}