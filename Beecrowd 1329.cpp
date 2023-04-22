#include <iostream>
using namespace std;

int main() {
	int quant, result, contM = 0, contJ = 0;
	cin >> quant;
	for (int i = 0; ; i++){
	cin >> result;
	if(result == 0)
	contM++;
	else if(result == 1)
	contJ++;
	if(contM + contJ == quant){
	cout << "Mary won " << contM << " times and John won " << contJ << " times\n";
	contM = 0;
	contJ = 0;
	if(i == quant - 1){
	i = -1;
	cin >> quant;
	}
	}
	if(quant == 0)
	break;
	if(i==quant-1){
	i = -1;
	cin >> quant;
	}
	}
    return 0;
}