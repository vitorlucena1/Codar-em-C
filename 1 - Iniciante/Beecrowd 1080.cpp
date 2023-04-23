#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
	int n[100], comparador,posicao;
	for (int i = 0; i<100; i++){
		cin >> n[i];
	}

	for(int i =0; i<100;i++){
		comparador = n[i];
		for(int j=0;j<100;j++){
			if(comparador <n[j]){
				comparador = n[j];
				posicao = j+1;
			}
		}
	}
			cout <<comparador<<"\n"<<posicao<<"\n";
			return 0;
}