#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int nota,cont=0;
	float med;
	while(cin>>nota){
	if(nota<0)
	break;
	med+=nota;
	cont++;
	}
	med/=cont;
	cout<<fixed;
	cout<<setprecision(2)<<med<<"\n";
	return 0;
}