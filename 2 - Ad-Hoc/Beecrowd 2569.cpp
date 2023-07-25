#include <iostream>
#include <string>
using namespace std;

int main() {
    string numero_1, numero_2;
    char operacao;
    cin >> numero_1 >> operacao >> numero_2;

    for (char &c : numero_1) {
        if (c == '7') c = '0';
    }

    for (char &c : numero_2) {
        if (c == '7') c = '0';
    }

    if (operacao == '+') {
        int resultado = stoi(numero_1) + stoi(numero_2);
        string resultado_str = to_string(resultado);
        for (char &c : resultado_str) {
            if (c == '7') c = '0';
        }
        cout << stoi(resultado_str) << endl;
    } else if (operacao == 'x') {
        int resultado = stoi(numero_1) * stoi(numero_2);
        string resultado_str = to_string(resultado);
        for (char &c : resultado_str) {
            if (c == '7') c = '0';
        }
        cout << stoi(resultado_str) << endl;
    }

return 0;
}