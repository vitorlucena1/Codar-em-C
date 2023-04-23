#include <iostream>
using namespace std;
int main(){
	int num;
	cin>> num;
	for (int i=0; i<12; i++){
		if(num%2==0){
			num++;
		}
		else if(num%2!=0){
		cout <<num<<"\n";
		num++;
		}
	}

	return 0;
}