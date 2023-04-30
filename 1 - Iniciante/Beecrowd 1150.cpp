#include <iostream>
using namespace std;
int main(){
	int x, z, soma=0, cont=1;
	cin>>x;
	while(1){
		cin>>z;
		if(z>x){
		soma=x;
		while(soma<=z){
		x++;
		soma+=x;
		cont++;
		}
		break;
	}
	}
	cout<<cont<<"\n";
}