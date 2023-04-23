#include <iostream>
using namespace std;

int main() {
    int quant, num, cont=1, teste;
    cin>>quant;
    for (int i=0; i<quant; i++){
    	cin>>num;
    	teste=num-1;
    	if(num==1)
    	cout<<"1 nao eh primo\n";
    	else if(num==2)
    	cout<<"2 eh primo\n";
    	if(num%2==0 && num!=2)
    	cout<<num<<" nao eh primo\n";
    	else if(num%2!=0){
    	for(int x=0; x<num; x++){
    		if(num%teste==0){
    		cont++;
    		break;
			}
			teste--;    		
			cont++;
		}
		if(num==cont)
		cout<< num<< " eh primo\n";
		else
		cout<<num<<" nao eh primo\n";
		teste=0;
		cont=1;
		}
	}
    return 0;
}
