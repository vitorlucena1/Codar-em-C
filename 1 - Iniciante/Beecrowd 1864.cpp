#include <iostream>
using namespace std;
int main(){
	char frase[]={"LIFE IS NOT A PROBLEM TO BE SOLVED"};
	int quant;
	cin>>quant;
	for(int i=0; i<quant; i++){
		cout<<frase[i];
	}
	cout<<"\n";
	return 0;
}