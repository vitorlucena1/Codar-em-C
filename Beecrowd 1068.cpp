#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#define MAX_PILHA 100
using namespace std;
typedef int tp_item;

typedef struct{
int topo;
tp_item item[MAX_PILHA];
}tp_pilha;

//inicia uma pilha, atribuindo -1 ao topo
void inicializa_pilha(tp_pilha *p){
p->topo=-1;
}

//v� se a pilha est� vazia, retornando 1 se estiver vazia ou 0, caso contr�rio
int pilha_vazia(tp_pilha *p){
if(p->topo == -1) return 1;
return 0;
}

//v� se a pilha t� cheia, retornando 1 se estiver cheia ou 0, caso contr�rio
int pilha_cheia(tp_pilha *p){
if(p->topo == MAX_PILHA - 1) return 1;
return 0;
}

//Empilha um elemento
int push(tp_pilha *p, tp_item e){
if(pilha_cheia(p)) return 0;
p->topo++;
p->item[p->topo] = e;
return 1;

}

//Desempilha um elemento
int pop (tp_pilha *p, tp_item *e){
if (pilha_vazia(p)) return 0;
*e=p->item[p->topo];
p->topo--;
return 1;
}

//retorna o elemento que est� no topo, sem desempilhar
int top(tp_pilha *p, tp_item *e){

if (pilha_vazia(p)) return 0;
*e=p->item[p->topo];
return 1;
}

int altura_pilha (tp_pilha *p){
return p->topo +1;
}

void imprime_pilha(tp_pilha p){
tp_item e;
while (pilha_vazia (&p) == 0){
pop(&p, &e);
cout << e << "\n";
}

}

void retira_impares(tp_pilha *p){
tp_pilha paux;
inicializa_pilha(&paux);
tp_item e;
//desempilha a pilha original e armazena apenas os pares na pilha auxiliar
// ! � a mesma coisa de ==0 nesse caso, ou igual a not
while(!pilha_vazia(p)){
// p j� � ponteiro, por isso n�o coloca o &
pop(p, &e);
if (e%2==0) //Se par
push(&paux, e);
} //fim do while

while (!pilha_vazia(&paux)){
pop(&paux, &e);
push(p,e);
}
}

int pilhas_iguais(tp_pilha p1, tp_pilha p2){
tp_item e1, e2;

if (altura_pilha(&p1) != altura_pilha(&p2))
return 0;

while(!pilha_vazia(&p1)){
pop(&p1, &e1);
pop(&p2, &e2);
if(e1 != e2) return 0;
}

return 1;
}

int empilha_pilhas(tp_pilha *p1, tp_pilha *p2){
tp_item e;
tp_pilha paux;
inicializa_pilha(&paux);
if(altura_pilha(p1)+altura_pilha(p2) > MAX_PILHA) return 0;
while (!pilha_vazia(p2)){
pop(p2, &e);
push(&paux, e);
}
while(!pilha_vazia(&paux)){
pop(&paux, &e);
push(p1, e);
}
return 1;
}


#endif

int main(){
	tp_pilha pilha;
	tp_item e;
	int i, tam, incorreto, r;
	char exp[1001];


	while((cin >> exp) ){ //EOF = fim de arquivo
		incorreto = 0;
		tam = strlen(exp);
		inicializa_pilha(&pilha);
		for (i = 0; i<tam; i++){
			if(exp[i] == '(')
			push(&pilha, exp[i]);
			if(exp[i] == ')')
			if( ! pop(&pilha, &e))
			{incorreto =1;
			break;
			}
		}
		if(!pilha_vazia(&pilha) || incorreto) cout <<"incorrect\n";
		else cout <<"correct\n";
	}
	return 0;
}