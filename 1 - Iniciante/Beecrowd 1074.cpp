#include <iostream>
using namespace std;
int main(){
	int quant, num;
	cin >>quant;
	for (int i=0; i<quant; i++){
		cin>>num;
		if(num%2==0 && num!=0){
			if(num>0){
				cout <<"EVEN POSITIVE\n";
			}
			else{
				cout <<"EVEN NEGATIVE\n";
			}
		}
		else if(num%2!=0){
			if(num>0){
				cout<<"ODD POSITIVE\n";
			}
			else{
				cout <<"ODD NEGATIVE\n";
			}
		}
		else if(num==0){
			cout<<"NULL\n";
		}
	}
	return 0;
}