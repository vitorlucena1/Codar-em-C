#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
double volume, diametro;
while(cin>>volume>>diametro){
cout<<"ALTURA = "<<fixed<<setprecision(2)<<volume/((3.14*pow(diametro,2))/4)<<"\n";
cout<<"AREA = "<<fixed<<setprecision(2)<<3.14*(pow(diametro/2, 2))<<"\n";
}

return 0;
}