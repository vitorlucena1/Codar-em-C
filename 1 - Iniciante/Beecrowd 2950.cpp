#include <iostream>
#include <iomanip>
using namespace std;

int main(){
float num1, num2, num3;
cin>>num1>>num2>>num3;

cout<<fixed<<setprecision(2)<<num1/(num2+num3)<<endl;

return 0;
}