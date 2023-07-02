#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int quant, N, C, resultado_C=0;
	double resultado=0;

	while(cin>>quant){

	for(int i=0; i<quant; i++){
	cin>>N>>C;
	resultado+=N*C;
	resultado_C+=C*100;
	}

	resultado/=resultado_C;
	cout<<fixed<<setprecision(4)<<resultado<<"\n";

	resultado=0;
	resultado_C=0;
	}
	
	return 0;
}