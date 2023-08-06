#include <iostream>
#include <string>
using namespace std;

int main(){
	string sub;
	int i=1;
	
	while(cin>>sub){

		if(sub[0]=='0')
		break;

		if(i!=1)
		cout<<endl;

		string texto;
		cin>>texto;

		cout<<"Instancia "<<i<<endl;

		if(texto.find(sub)!=std::string::npos)
		cout<<"verdadeira"<<endl;

		else
		cout<<"falsa"<<endl;
		
		i++;
	}
	

	return 0;
}