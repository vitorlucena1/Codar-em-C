#include <iostream>
using namespace std;
int main(){
	int num1, num2,teste=0, loop=0;
	cin >> num1>>num2;
	if(num1>num2){
		loop = (num1-num2)+1;
	for (int i=0; i<loop; i++){
		if(num1%13!=0){
		teste+=num1;
		num1--;	
		}
		else if(num1%13==0){
			num1--;
		}
	}
}
else if(num1<num2){
	loop = (num2-num1)+1;
	for(int i=0; i<loop; i++){
		if(num2%13!=0){
		teste+=num2;
		num2--;	
		}
		else if(num2%13==0){
			num2--;
		}
	}
}
cout <<teste<<"\n";
	return 0;
}