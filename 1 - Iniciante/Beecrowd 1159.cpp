#include <iostream>
using namespace std;

int main(){
	int num, num2, quant, teste=0, cont=0;
		while(cin>>num){
		if(num==0)
		break;
		for(int i=0; ; i++){
				if(num%2==0){
				teste+=num;
				num++;
				cont++;
			}
			else if(num%2!=0){
				num++;
			}
			if(cont==5){
			cont=0;
			break;
			}
			}
			cout <<teste<<"\n";
			teste=0;
	}
	return 0;
}