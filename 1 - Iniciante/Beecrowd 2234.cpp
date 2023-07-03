#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double cachorro_quente, participantes;

	cin>>cachorro_quente>>participantes;

	cout<<fixed<<setprecision(2)<<cachorro_quente/participantes<<"\n";

	return 0;
}