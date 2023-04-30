#include <iostream>
using namespace std;
int main(){
	int idade_monica, idade_filho1, idade_filho2, idade_filho3, result=0;
	cin>>idade_monica>>idade_filho1>> idade_filho2;
	result = (idade_monica-(idade_filho1+idade_filho2));
	if(result>idade_filho1 && result>idade_filho2){
	idade_filho3 = result;
	cout<<idade_filho3<<"\n";
	}
	if(result<idade_filho1 && idade_filho1>idade_filho2){
	idade_filho3 = idade_filho1;
	cout<<idade_filho3<<"\n";
	}
	if(result<idade_filho2 && idade_filho1<idade_filho2){
	idade_filho3 = idade_filho2;
	cout<<idade_filho3<<"\n";
	}

}