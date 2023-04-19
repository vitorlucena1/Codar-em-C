#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float nota, teste, med; 
	int cont=0;
	while(nota<=0 || nota >= 0 || nota <= 10.0 ||nota >=10.0){
		cin >> nota;
		if(nota<=0||nota >10.0)
		cout <<"nota invalida\n";
		else if(nota >= 0 || nota <= 10.0){
		teste += nota;
		cont++;
		}
		if(cont==2)
		break;
	}
	med=teste/2;
	cout<<fixed;
	cout <<"media = "<<setprecision(2)<<med<<"\n";
	return 0;
}