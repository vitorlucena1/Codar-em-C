#include <iostream>
using namespace std;

int main(){
	int N, K, numero;

	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>K;

		for(int l=0; l<K; l++){
		cin>>numero;

		switch(numero){

		case 1:
		cout<<"Rolien\n";
		break;

		case 2:
		cout<<"Naej\n";
		break;

		case 3:
		cout<<"Elehcim\n";
		break;

		case 4:
		cout<<"Odranoel\n";
		break;
		}

		}
	}

	return 0;
}