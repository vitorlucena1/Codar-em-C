#include <iostream>
using namespace std;

int main(){
int  H, E, A, O, W, X;
cin>>H>>E>>A>>O>>W>>X;

if(H+E+A+X>=O+W)
cout<<"Middle-earth is safe.\n";

else
cout<<"Sauron has returned.\n";

return 0;
}