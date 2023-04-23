#include <iostream>
using namespace std;
int main(){
	int quant, teste=1;
	cin >> quant;
	for (int i=0; i<quant; i++){
		cout <<teste<<" "<<teste+1<<" "<< teste+2<<" PUM\n";
		teste++;
		teste++;
		teste++;
		teste++;
	}
	return 0;
}