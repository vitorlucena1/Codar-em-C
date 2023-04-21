#include <iostream>
using namespace std;
int main(){
	float j=1;
	int cont=1;
    for(float i=0; i<2.2; i++){
    	if(cont%3==0){
    	cout <<"I="<< i <<" "<<"J="<<j<<"\n";
    	i-=0.8;
		j-=2.8;	
		}
    	else{
    	cout <<"I="<< i <<" "<<"J="<<j<<"\n";
		}
    	j++;
    	if(cont%3!=0)
    	i--;
    	cont++;
	}
	return 0;
}