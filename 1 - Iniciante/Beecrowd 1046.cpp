#include <iostream>
using namespace std;
int main(){
	int num1, num2, cont=0;
	cin>>num1>>num2;
	if(num1>num2){
		while(num1!=num2){
			if(num1==24){
			num1=0;
			}
			if(num1==num2)
			break;
			num1++;
			cont++;
		}
		cout<<"O JOGO DUROU "<<cont<<" HORA(S)\n";
	}
	else if(num1<num2){
		while(num2!=num1){
			if(num2==num1)
			break;
			num1++;
			cont++;
		}
		cout<<"O JOGO DUROU "<<cont<<" HORA(S)\n";
	}

	else
	cout<<"O JOGO DUROU 24 HORA(S)\n";
	
	return 0;
}