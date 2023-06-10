#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	char opcao;
	cin>>opcao;
	float soma=0, media=0;
	float matriz[12][12];
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++)
		cin>>matriz[i][j];
	}
	for(int j=1; j<12; j++){
		for(int i=0; i<j; i++){
		soma+=matriz[j][i];
		}
	}
	
	media=soma/66;
		
	switch(opcao){
		case 'S':
		cout<<fixed<<setprecision(1)<<soma<<"\n";
		break;
        
		case 'M':
		cout<<fixed<<setprecision(1)<<media<<"\n";
		break;
	}
	return 0;
}