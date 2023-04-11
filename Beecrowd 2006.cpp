#include <iostream>
using namespace std;

int main() {
    int tp_cha,a,b,c,d,e,cont=0;
    cin >>tp_cha>>a>>b>>c>>d>>e;
    if(tp_cha>=1 && tp_cha<=4){
    if(a>=1 && a<=4 && b>=1 && b<=4 && c>=1 && c<=4 && d>=1 && d<=4 && e>=1 && e<=4){
    if(a == tp_cha){
    cont++;
	}
    if(b== tp_cha){
    cont++;	
	}
    if(c== tp_cha){
    cont++;	
	}
    if(d== tp_cha){
    cont++;	
	}
    if(e== tp_cha){
    cont++;	
	}
    cout <<cont<<"\n";
	}	
	}
	else{
		cout <<"0\n";
	}

    return 0;
}