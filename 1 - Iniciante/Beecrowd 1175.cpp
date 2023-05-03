#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int num, numeros[20], j=19;
	for(int i=0, j=19; i<20; i++, j--){
	cin>>numeros[j];
	}
	for (int i=0; i<20; i++){
		cout<<"N["<<i<<"] = "<<numeros[i]<<"\n";
	}
	return 0;
}