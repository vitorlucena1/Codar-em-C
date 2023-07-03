#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	double numero, minimo, maximo;
	cin>>numero;

	minimo=numero/log(numero);
	maximo=1.25506*(numero/log(numero));
	
	cout<<fixed<<setprecision(1)<<minimo<<" "<<maximo<<"\n";
    
	return 0;
}