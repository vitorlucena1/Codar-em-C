#include <iostream>
using namespace std;
int main(){
	int num, cont=0;
	cin>>num;
	for(int i=0; i<1000; i++){
	if(cont==num)
	cont=0;
	cout<<"N["<<i<<"] = "<<cont<<"\n";
	cont++;
	}
	return 0;
}