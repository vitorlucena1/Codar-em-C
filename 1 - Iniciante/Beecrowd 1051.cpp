#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
 	double renda, imposto;
 	cin >> renda;
 	
 	if(renda <= 2000.00){
 		cout <<"Isento"<<endl;
 		}
 		else if(renda>=2000.01 && renda <= 3000.00){
		 imposto = (renda - 2000.00)* 0.08;
		 cout<<"R$ "<< fixed <<setprecision(2)<< imposto <<endl;
		 } else if(renda >=3000.01 && renda <= 4500.00){
		 	imposto = ((renda - 3000.00)*0.18 + (1000.00*0.08));
		 cout<<"R$ "<< fixed <<setprecision(2)<< imposto <<endl;
		 } else if (renda >= 4500.01){
		 	imposto = ((renda - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08);
		 cout<<"R$ "<<fixed <<setprecision(2)<< imposto <<endl;
 	}
    return 0;
}