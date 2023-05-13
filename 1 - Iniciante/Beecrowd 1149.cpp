#include <iostream>
using namespace std;
int main(){
	int a, n, soma=0;
	cin>>a>>n;
	if(n<0 || n==0){
	while(n<0 || n==0){
	cin>>n;	
	if(n!=0 && n>0)
	break;
	}
	
}
	for(int i=0; i<=n-1; i++){
	soma+=a+i;
	}
	cout<<soma<<"\n";
	return 0;
	
}