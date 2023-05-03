#include <iostream>
using namespace std;
int main(){
	int quant, num, cont=0, soma, x=1;
	cin>>quant;
	for (int i=0; i<quant; i++){
		cin>>num;
		for(;;){
			if(num%x==0 && x!=num && x<num)
			soma+=x;
			if(x>=num)
			break;
			x++;

		}
		if(soma==num)
		cout<<x<<" eh perfeito\n";
		else
		cout<<x<<" nao eh perfeito\n";
		soma=0;
		x=1;
	}
	return 0;
}