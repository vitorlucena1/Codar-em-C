#include <iostream>
using namespace std;
int main(){
	int quant, raio1, raio2, soma;
	cin>>quant;
	for(int i=0; i<quant; i++){
		cin>>raio1>>raio2;
		soma=raio1+raio2;
		cout<<soma<<"\n";
	}
	return 0;
}