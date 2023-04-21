#include <iostream>
using namespace std;
int main(){
	int quant, nota;
	cin >> quant;
	for (int i=1; i<=quant; i++){
		cin>>nota;
		cout<<"resposta "<<i<<": "<<nota<<"\n";
	}
	return 0;
}