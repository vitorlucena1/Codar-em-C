#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
int quant, ricardo, vicente, resultado;
cin>>quant;

for(int i=0; i<quant; i++){
    cin>>ricardo>>vicente;

    while (vicente != 0){
			resultado = ricardo % vicente;
			ricardo = vicente;
			vicente = resultado;

		}
    cout<<ricardo<<endl;
}

return 0;
}