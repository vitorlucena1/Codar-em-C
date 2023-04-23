#include <iostream>
using namespace std;
int main(){
	int num, num2, teste=0, teste1, cont=0,quant;
	cin>>quant;
	if(quant==1){
	cin>>num>>num2;
		for(int x=0; x<quant+1; x++){
		if (num>num2){
			teste1= (num-num2)-1;
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
			cout <<teste<<"\n";
			teste=0;		
		}
		else if(num<num2){
			teste1= (num2-num)-1;
			num2--;
			for(int i=0; i<teste1; i++){
				if(num2%2!=0){
				teste+=num2;
				num2--;
			}
			else if(num2%2==0){
				num2--;
			}
			}
			cout <<teste<<"\n";
			teste=0;	
		}
		else if(num==num2)
		cout<<"0\n";
		}
	}
		else if(quant>1 && quant%2==0){
		cin >> num>>num2; 
		for(int x=0; x<quant; x++){
		if (num>num2){
			teste1= (num-num2)-1;
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
			cout <<teste<<"\n";
			teste=0;		
		}
		else if(num<num2){
			teste1= (num2-num)-1;
			num2--;
			for(int i=0; i<teste1; i++){
				if(num2%2!=0){
				teste+=num2;
				num2--;
			}
			else if(num2%2==0){
				num2--;
			}
			}
			cout <<teste<<"\n";
			teste=0;	
		}
		else if(num==num2)
		cout<<"0\n";
		if(x==quant-1)
		break;
		cin >>num >>num2;
		}
		}
		
		else if(quant>1 && quant%2!=0){
		cin>>num>>num2;
		for(int x=0; x<quant; x++){
		if (num>num2){
			teste1= (num-num2)-1;
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
			cout <<teste<<"\n";
			teste=0;		
		}
		else if(num<num2){
			teste1= (num2-num)-1;
			num2--;
			for(int i=0; i<teste1; i++){
				if(num2%2!=0){
				teste+=num2;
				num2--;
			}
			else if(num2%2==0){
				num2--;
			}
			}
			cout <<teste<<"\n";
			teste=0;	
		}
		else if(num==num2)
		cout<<"0\n";
			if(x==quant-1)
		break;
		cin>>num>>num2;
		}	
		}
	return 0;
}