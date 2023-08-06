#include <iostream>
using namespace std;

int main(){
	string senha;
	
	while(getline(cin, senha)){
		bool Maiscula=false, miniscula=false, numero=false, tamanho=false, caracter_especial=true;
	
	if(senha.length()>=6 && senha.length()<=32){
		tamanho=true;
	}
	
	// Utilizando um laço for para percorrer cada posição da senha.
	for(int i=0; i<senha.length(); i++)
	{
		// Conferindo se o caracter é uma letra maiúscula.
		if(senha[i] >= 'A' && senha[i]<='Z') // Pesquisar tabela ascii e operadores lógicos em C para compreender a condição do if.
		{
			Maiscula=true;
			// Como basta que um caracter seja maiúsculo, utilizamos o comando break para sair do laço for.
			break;
		}
	}
	
	// Utilizando um laço for para percorrer cada posição da senha.
	for(int i=0; i<senha.length(); i++)
	{
		// Conferindo se o caracter é uma letra minúscula.
		if(senha[i] >= 'a' && senha[i]<='z')
		{
			miniscula=true;
			// Como basta que um caracter seja minúsculo, utilizamos o comando break para sair do laço for.
			break;
		}
	}
	
	// Utilizando um laço for para percorrer cada posição da senha.
	for(int i=0; i<senha.length(); i++)
	{
		// Conferindo se o caracter é um algarismo.
		if(senha[i] >= '0' && senha[i]<='9')
		{
			numero=true;
			// Como basta que um caracter seja algarismo, utilizamos o comando break para sair do laço for.
			break;
		}
	}

	// Utilizando um laço for para percorrer cada posição da senha.
	for(int i=0; i<senha.length(); i++)
	{
		// Conferindo se o caracter é um algarismo.
		if(senha[i] == ' ' || (senha[i] >='!' && senha[i]<='/' || (senha[i]>=':' && senha[i]<='@') || (senha[i]>='[' && senha[i]<='`') || senha[i]>='{'))
		{
			caracter_especial=false;
			// Como basta que um caracter seja algarismo, utilizamos o comando break para sair do laço for.
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