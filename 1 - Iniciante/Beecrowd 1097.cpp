#include <iostream>
using namespace std;
int main(){
	int j=7, cont=1;
    for(int i=1; i<10; i++){
    	if(j==4){
    		j=7;
		}
    	if(cont%3==0){
    	cout <<"I="<< i <<" "<<"J="<<j<<"\n";
    	i=i+1;
		j+=5;	
		}
    	else{
    	cout <<"I="<< i <<" "<<"J="<<j<<"\n";
		}
    	j--;
    	if(cont%3!=0)
    	i--;
    	cont++;

	}
	return 0;
}