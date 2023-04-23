#include <iostream>
using namespace std;
int main(){
	int num, num2, teste=0, teste1;
	cin >> num >> num2;
	if(num<num2){
	num++;
	for (int i=num; i<num2; i++){
		if(num%5==2 || num%5==3)
		cout<<num<<"\n";
		num++;
	}
}
	else if	(num>num2){
	num2++;
	for (int i=num2; i<num; i++){
		if(num2%5==2 || num2%5==3)
		cout<<num2<<"\n";
		num2++;
	}
}
	return 0;
}