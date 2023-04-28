#include <iostream>
using namespace std;
int main(){
	int quant=0, cont=1;
	while(cin>>quant){
	if(quant==0)
	break;
	while(cont<=quant){
		if(cont==quant)
		cout<<cont;
		else
		cout<<cont<<" ";
		cont++;
		if(cont==quant+1){
		cont=1;
		break;	
		}	
		}
		cout<<"\n";
	}
	return 0;
}