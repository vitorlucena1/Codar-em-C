#include <iostream>
using namespace std;

int main() {
    int a;
    cin >>a;

    if(a>=0 && a<=100 ){
    if(a==0){
    	cout<<"E\n";
	}
	else if(a >=1 && a<=35){
    	cout<<"D\n";
	}
		else if(a >=36 && a<=60){
    	cout<<"C\n";
	}
		else if(a >=61 && a<=85){
    	cout<<"B\n";
	}
		else if(a >=86 && a<=100){
    	cout<<"A\n";
	}
}

    return 0;
}