#include <iostream>
using namespace std;

int main(){
	int num1, num2, resto, cont=0;
	while(cin>>num1>>num2){
		if(num1==0 && num2==0)
		break;
		
		resto=num2-num1;
		
		if(resto>=100){
		resto-=100;
		cont++;	
		}
		
		if(resto>=50){
		resto-=50;
		cont++;
		}
		
		if(resto>=20){
		resto-=20;
		cont++;
		}
		
		if(resto>=10){
		resto-=10;
		cont++;	
		}
		
		if(resto>=5){
		resto-=5;
		cont++;
		}
		
		if(resto>=2){
		resto-=2;
		cont++;
		}
		
		if(cont!=2)
		cout<<"impossible\n";
		
		else
		cout<<"possible\n";
		
		cont=0;
	}

	
	return 0;
}