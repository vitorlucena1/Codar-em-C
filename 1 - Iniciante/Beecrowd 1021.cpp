#include <iostream>
using namespace std;
int main() {
    double n;
    int inteiro, x1, x2;
    cin >> n;
	inteiro = n;
    n *= 100;
    x2 = n;
    cout << "NOTAS:\n";
    cout << inteiro/100 << " nota(s) de R$ 100.00\n";
    x1 = (inteiro%100);
    cout << x1/50 << " nota(s) de R$ 50.00\n";
    x1 = (x1%50);
    cout << x1/20 << " nota(s) de R$ 20.00\n";
    x1 = (x1%20);
    cout << x1/10 << " nota(s) de R$ 10.00\n";
    x1 = (x1%10);
    cout << x1/5 << " nota(s) de R$ 5.00\n";
    x1 = (x1%5);
    cout << x1/2 << " nota(s) de R$ 2.00\n";
    x1 = (x1%2);
    cout << "MOEDAS:\n";
    cout << x1/1 << " moeda(s) de R$ 1.00\n";

    x2 = (x2%100);
    cout << (x2/50) << " moeda(s) de R$ 0.50\n";
    x2 = x2%50;
    cout << (x2/25) << " moeda(s) de R$ 0.25\n";
    x2 = x2%25;
    cout << (x2/10) << " moeda(s) de R$ 0.10\n";
    x2 = x2%10;
    cout << (x2/5) << " moeda(s) de R$ 0.05\n";
    x2 = x2%5;
    cout << (x2/1)<< " moeda(s) de R$ 0.01\n";
    
    return 0;
}