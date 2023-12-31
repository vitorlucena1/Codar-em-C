#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int vetor[3], vetor1[3];
    
    for(int i=0; i<3; i++){
        cin>>vetor[i];
        vetor1[i]=vetor[i];
    }

    sort(vetor, vetor+3);

    for(int i=0; i<3; i++){
        cout<<vetor[i]<<endl;
    }

    cout<<endl;

    for(int i=0; i<3; i++){
        cout<<vetor1[i]<<endl;
    }

    return 0;
}