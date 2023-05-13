#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double soma=1;
	for (double i=3, b=2; i<=39; i+=2, b*=2){
		soma+=i/b;
	}
	cout<<fixed<<setprecision(2)<<soma<<"\n";
    return 0;
}