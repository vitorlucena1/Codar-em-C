#include <iostream>
using namespace std;
int main(){
	int num1, num2;
	while (num1!=0 || num2!=0){
		cin >> num1 >> num2;
		if(num1>0 && num2>0)
		cout <<"primeiro\n";
		else if(num1>0 && num2<0)
		cout<<"quarto\n";
		else if(num1<0 &&num2>0)
		cout<<"segundo\n";
		else if(num1<0 && num2<0)
		cout<<"terceiro\n";
		else if(num1==0 || num2==0)
		break;
	}
	return 0;
}