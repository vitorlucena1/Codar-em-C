#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int quant, num1, num2;

    cin>>quant;

    for(int i=0; i<quant; i++){
        cin>>num1>>num2;

        cout<<floor((num1*num2)/2.0)<<" cm2"<<endl;
    }

    return 0;
}