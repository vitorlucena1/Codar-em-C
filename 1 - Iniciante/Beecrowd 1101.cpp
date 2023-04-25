#include <iostream>
using namespace std;
int main(){
    int num, num2, soma;

    while(cin >> num >> num2){
        if(num <= 0 || num2 <= 0) break;

        if(num > num2){
            for(int i = num2; i <= num; i++){
                cout << i << " ";
                soma += i;
            }
            cout << "Sum=" << soma << "\n";
            soma = 0;
        }
        else{
            for(int i = num; i <= num2; i++){
                cout << i << " ";
                soma += i;
            }
            cout << "Sum=" << soma << "\n";
            soma = 0;
        }
    }
    return 0;
}
