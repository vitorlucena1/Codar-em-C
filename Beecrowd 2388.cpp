#include <iostream>
using namespace std;

int main() {
    int a,b, vet[1001], result;
    cin >>a;

    if(a>=1 && a<=1000){
	for (int i=0; i<a;i++){
		cin >>vet[i] >>vet[i+1];
		result = result + ((vet[i]) * (vet[i+1]));
	}

}
	cout <<result<<"\n";
    return 0;
}