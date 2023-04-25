#include <iostream>
using namespace std;
int main(){
	int simoun, golI, golG, contJ=0, contvI=0, contvG=0, contE=0;
	while(cin>>golI>>golG){
		contJ++;
		if(golI==golG)
		contE++;
		else if(golI>golG)
		contvI++;
		else if(golI<golG)
		contvG++;
		cout<<"Novo grenal (1-sim 2-nao)\n";
		cin>>simoun;
		if(simoun==2)
		break;
	}
	cout<<contJ<<" grenais\n";
	cout<<"Inter:"<<contvI<<"\n";
	cout<<"Gremio:"<<contvG<<"\n";
	cout<<"Empates:"<<contE<<"\n";
	if(contvI>contvG)
	cout<<"Inter venceu mais\n";
	else if(contvI<contvG)
	cout<<"Gremio venceu mais\n";

	return 0;
}