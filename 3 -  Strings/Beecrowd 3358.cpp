#include <iostream>
#include <string.h>
using namespace std;

int main(){
int quant, cont=0;
cin>>quant;

for(int i=0; i<quant; i++){
char nome[42];
cin>>nome;

for(int j=0; j<strlen(nome);j++){
if(j+2<strlen(nome)){
if(((nome[j]!='a' && nome[j]!='A') && (nome[j]!='e' && nome[j]!='E') && (nome[j]!='i' && nome[j]!='I') &&(nome[j]!='o' && nome[j]!='O') && (nome[j]!='u' && nome[j]!='U'))&&((nome[j+1]!='a') && (nome[j+1]!='e') && (nome[j+1]!='i') &&(nome[j+1]!='o') && (nome[j+1]!='u'))&&((nome[j+2]!='a') && (nome[j+2]!='e') && (nome[j+2]!='i') &&(nome[j+2]!='o') && (nome[j+2]!='u'))){
cont++;
}
}
}

if(cont!=0)
cout<<nome<<" nao eh facil\n";

else
cout<<nome<<" eh facil\n";

cont=0;

}
return 0;
}