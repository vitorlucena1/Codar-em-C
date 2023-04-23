#include <iostream>
using namespace std;

int fatorial(int n){
if (n==0)
return 1;
else
return n * fatorial(n-1);
}

int main() {
    int a;
    cin >>a;

    if(a>0 && a<13 ){
    fatorial(a);
    cout <<fatorial(a)<<"\n";
}

    return 0;
}   