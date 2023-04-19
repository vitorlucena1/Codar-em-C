#include <iostream>
using namespace std;
int main(){
	float num;
	int cont=0;
	for (int i=0; i<6; i++){
		cin>>num;
		if(num>0){
		cont++;
		}
	}
	cout <<cont<<" valores positivos\n";
	return 0;
}