#include <iostream>
using namespace std;
int main(){
	int num, num2, teste=0, teste1;
	cin >> num >> num2;
		if (num>num2){
			teste1 = (num-num2)-1;
			num--;
			for(int i=0; i<teste1; i++){
				if(num%2!=0){
				teste+=num;
				num--;
			}
			else if(num%2==0){
				num--;
			}	
			}
		}
		else if(num<num2){
			teste1 = (num2-num)-1;
			num2--;
			for(int i=0; i<teste1; i++){
				if(num2%2!=0){
				teste+=num2;
				num2--;
			}
			else if(num%2==0){
				num2--;
			}	
			}
		}
	cout <<teste<<"\n";
	return 0;
}