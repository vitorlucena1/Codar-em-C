#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(){
	int quant, teste, cont=0;
	string teste1, teste2;
	cin>>quant>>teste1>>teste2;
	if(quant%2==0){
	if(teste1 == teste2){
            cout << "Deletion succeeded\n";
        } 
		else{
            cout << "Deletion failed\n";
        }	
	}
	else{
		for(int i = 0; i < teste1.length(); i++){
            if(teste1[i] == teste2[i]){
                cout << "Deletion failed\n";
                break;
            }
            cont++;
        }
    if(cont==teste1.length())
	cout<<"Deletion succeeded\n";
	}
    return 0;
}