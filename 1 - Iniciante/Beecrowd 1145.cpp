#include <iostream>
using namespace std;
int main(){
	int quant, max, cont=1;
	cin>>quant>>max;
	for (int i=1; i<=max; i++){
		if(cont==quant){
		cout<<i;
		cout<<"\n";	
		cont=1;
		}
		else{
		cout<<i<<" ";
		cont++;	
		}
	}
	return 0;
}