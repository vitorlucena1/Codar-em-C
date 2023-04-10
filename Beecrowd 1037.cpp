#include <iostream>
using namespace std;
int main(){
	float x1;
	cin >> x1;
	if(x1 >= 0 && x1 <= 25.00){
	cout <<"Intervalo [0,25]\n";		
	}
	else if(x1 >= 25.01 && x1 <= 50.00){
	cout <<"Intervalo (25,50]\n";		
	}
	else if(x1 > 50.01 && x1 <= 75.00){
	cout <<"Intervalo (50,75]\n";		
	}
	else if(x1 > 75.01 && x1 <= 100.00){
	cout <<"Intervalo (75,100]\n";		
	}
	else{
	cout <<"Fora de intervalo\n";
	}
	return 0;
}