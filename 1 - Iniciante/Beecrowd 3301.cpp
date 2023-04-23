#include <iostream>
using namespace std;
int main(){
    int h, z, l;
    cin >> h >> z >> l;
    if ((z > h && h > l) || (z < h && h < l))
        cout << "huguinho\n";
    else if ((h > z && z > l) || (h < z && z < l))
       cout << "zezinho\n";
    else
        cout << "luisinho\n";
    
    return 0;
}