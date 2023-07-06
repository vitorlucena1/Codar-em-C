#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	string num;
	unsigned int i;
	while(cin>>num){
	if(num[0]<'0')
	break;

	if(num[0]=='0' && num[1]!='x')
	cout<<"0\n";

	if(num[0]!='0' && num[1]!='x'){
	istringstream(num) >> std::dec >> i;
	printf("0x%X\n", i);
	}

	if(num[0]=='0' && num[1]=='x'){
	istringstream(num) >> std::hex >> i;
	cout << i <<"\n";
	}

	}

	return 0;
}