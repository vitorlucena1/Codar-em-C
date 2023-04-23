#include <iostream>

using namespace std;

int main() {
    int x1,x2;
    cin >> x1;
    cout <<x1/365<<" ano(s)\n";
    x2 = (x1%365);
    cout <<x2/30<<" mes(es)\n";
    x2=(x2%30);
    cout <<x2<<" dia(s)\n";
    return 0;

}