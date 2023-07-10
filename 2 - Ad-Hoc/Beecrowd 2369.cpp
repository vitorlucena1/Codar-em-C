#include <iostream>
using namespace std;

int main(){
 int valor, teste=0;
 cin>>valor;
 teste=valor;
 
 if(valor<=10)
 cout<<"7\n";

 else if(valor>=11 && valor <=30){
	valor-=10;
	cout<<7+valor<<"\n";
 }

 else if(valor>=31 && valor<=100){
	teste=7+20+((valor-30)*2);
	cout<<teste<<"\n";
 }
 
 else if(valor>=101){
	teste=7+20+140+((valor-100)*5);
	cout<<teste	<<"\n";
 }	

return 0;
}