#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;

	if(num<=1)
	cout<<"Top 1\n";
	
	else if(num<=3)
	cout<<"Top 3\n";

	else if(num<=5)
	cout<<"Top 5\n";

	else if(num<=10)
	cout<<"Top 10\n";

	else if(num<=25)
	cout<<"Top 25\n";
	
	else if(num<=50)
	cout<<"Top 50\n";

	else if(num<=100)
	cout<<"Top 100\n";

	return 0;
}