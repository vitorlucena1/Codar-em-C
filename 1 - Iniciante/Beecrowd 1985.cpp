#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int quant, pedido, quant_pedido;
	double resultado=0;
	cin>>quant;
	for(int i=0; i<quant; i++){
		cin>>pedido>>quant_pedido;
		
		if(pedido==1001)
		resultado+=1.5*quant_pedido;
			
		else if(pedido==1002)
		resultado+=2.5*quant_pedido;
			
		else if(pedido==1003)
		resultado+=3.5*quant_pedido;
		
		else if(pedido==1004)
		resultado+=4.5*quant_pedido;
		
		else if(pedido==1005)
		resultado+=5.5*quant_pedido;
	}
	cout<<fixed<<setprecision(2)<<resultado<<"\n";
	
	return 0;
}