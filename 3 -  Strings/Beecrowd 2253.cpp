#include <iostream>
using namespace std;

int main(){
	string senha;
	
	while(getline(cin, senha)){
		bool Maiscula=false, miniscula=false, numero=false, tamanho=false, caracter_especial=true;
	
	if(senha.length()>=6 && senha.length()<=32){
		tamanho=true;
	}
	
	// Utilizando um la�o for para percorrer cada posi��o da senha.
	for(int i=0; i<senha.length(); i++)
	{
		// Conferindo se o caracter � uma letra mai�scula.
		if(senha[i] >= 'A' && senha[i]<='Z') // Pesquisar tabela ascii e operadores l�gicos em C para compreender a condi��o do if.
		{
			Maiscula=true;
			// Como basta que um caracter seja mai�sculo, utilizamos o comando break para sair do la�o for.
			break;
		}
	}
	
	// Utilizando um la�o for para percorrer cada posi��o da senha.
	for(int i=0; i<senha.length(); i++)
	{
		// Conferindo se o caracter � uma letra min�scula.
		if(senha[i] >= 'a' && senha[i]<='z')
		{
			miniscula=true;
			// Como basta que um caracter seja min�sculo, utilizamos o comando break para sair do la�o for.
			break;
		}
	}
	
	// Utilizando um la�o for para percorrer cada posi��o da senha.
	for(int i=0; i<senha.length(); i++)
	{
		// Conferindo se o caracter � um algarismo.
		if(senha[i] >= '0' && senha[i]<='9')
		{
			numero=true;
			// Como basta que um caracter seja algarismo, utilizamos o comando break para sair do la�o for.
			break;
		}
	}

	// Utilizando um la�o for para percorrer cada posi��o da senha.
	for(int i=0; i<senha.length(); i++)
	{
		// Conferindo se o caracter � um algarismo.
		if(senha[i] == ' ' || (senha[i] >='!' && senha[i]<='/' || (senha[i]>=':' && senha[i]<='@') || (senha[i]>='[' && senha[i]<='`') || senha[i]>='{'))
		{
			caracter_especial=false;
			// Como basta que um caracter seja algarismo, utilizamos o comando break para sair do la�o for.
			break;
		}
	}

	if(Maiscula==true && miniscula==true && numero==true && tamanho==true && caracter_especial==true)
	cout<<"Senha valida."<<endl;

	else
	cout<<"Senha invalida."<<endl;
	}
return 0;
}