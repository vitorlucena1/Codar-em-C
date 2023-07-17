#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int quant;
cin>>quant;
int S, B, A, S1, B1, A1;
float total_s=0, total_b=0, total_a=0, total_s1=0, total_b1=0, total_a1=0;
for(int i=0; i<quant; i++){
	char nome[100];
	cin>>nome;
	cin>>S>>B>>A;
	cin>>S1>>B1>>A1;
	
	total_s+=S;
	total_b+=B;
	total_a+=A;
	total_s1+=S1;
	total_b1+=B1;
	total_a1+=A1;

}
	cout<<"Pontos de Saque: "<<fixed<<setprecision(2)<<(total_s1/total_s)*100<<" %.\n";
	cout<<"Pontos de Bloqueio: "<<fixed<<setprecision(2)<<(total_b1/total_b)*100<<" %.\n";
	cout<<"Pontos de Ataque: "<<fixed<<setprecision(2)<<(total_a1/total_a)*100<<" %.\n";

return 0;
}