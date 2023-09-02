#include <iostream>
using namespace std;

int main(){
    int num1, num2, quant;
    char letra;
    cin>>quant;

    for(int i=0; i<quant; i++){
    cin>>num1>>letra>>num2;
    if(num1==num2){
        cout<<num1*num2<<endl;
    }
    
    else{

    if(letra>='A' && letra<='Z'){
        cout<<num2-num1<<endl;
    }
    if(letra>='a' && letra<='z'){
        cout<<num1+num2<<endl;
    }
    }

    }

    return 0;
}