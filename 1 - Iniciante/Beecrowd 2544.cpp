#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int numero;
    while(cin>>numero){
        
        for(int i=0; i<=numero-1; i++){

             if(numero == int(pow(2,i))){
                cout<<i<<endl;
                break;
            }

             if(int(pow(2,i))>numero){
                cout<<i-1<<endl;
                break;
            }
        }
    }

    return 0;
}