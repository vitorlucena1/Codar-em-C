#include <iostream>
using namespace std;

int main(){
	int quant, numero, multp_2=0, multp_3=0, multp_4=0, multp_5=0;
	cin>>quant;
	for(int i=0; i<quant; i++){
		cin>>numero;
        
		if(numero%2==0)
		multp_2++;

		if(numero%3==0)
		multp_3++;

		if(numero%4==0)
		multp_4++;

		if(numero%5==0)
		multp_5++;
	}
	
	cout<<multp_2<<" Multiplo(s) de 2\n";
	cout<<multp_3<<" Multiplo(s) de 3\n";
	cout<<multp_4<<" Multiplo(s) de 4\n";
	cout<<multp_5<<" Multiplo(s) de 5\n";
	
	return 0;
}