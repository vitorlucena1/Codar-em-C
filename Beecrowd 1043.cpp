#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a,b,c, perimetro, area;
	cin >> a>>b>>c;
	if(a < b+c && b < a+c && c< a+b){
	perimetro = a+b+c;
	cout << fixed;
	cout <<"Perimetro = "<<setprecision(1)<<perimetro <<"\n";
	}
	else{
		area = ((a+b)*c)/2;
		cout << fixed;
		cout <<"Area = "<<setprecision(1)<<area <<"\n";
	}
	
	return 0;
	
}