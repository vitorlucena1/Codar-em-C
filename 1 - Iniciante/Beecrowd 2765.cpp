#include <iostream>
using namespace std;

int main(){
    int teste=0;
    string palavra;
    
    getline(cin, palavra);

    for(int i=0; i<palavra.length(); i++){
    if(palavra[i]==',' && teste==0){
    cout<<endl;
    teste=1;
    }

    else
    cout<<palavra[i];
    }

    cout<<endl;

return 0;
}