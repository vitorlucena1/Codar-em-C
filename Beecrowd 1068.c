#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PILHA 100
typedef int tp_item;

typedef struct{
int topo;
tp_item item[MAX_PILHA];
}tp_pilha;

//inicia uma pilha, atribuindo -1 ao topo
void inicializa_pilha(tp_pilha *p){
p->topo=-1;
}

//vê se a pilha está vazia, retornando 1 se estiver vazia ou 0, caso contrário
int pilha_vazia(tp_pilha *p){
if(p->topo == -1) return 1;
return 0;
}

//vê se a pilha tá cheia, retornando 1 se estiver cheia ou 0, caso contrário
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


int altura_pilha (tp_pilha *p){
return p->topo +1;
}


#endif

int main(){
	tp_pilha pilha;
	tp_item e;
	int i, tam, incorreto, r;
	char exp[1001];

	while((scanf(" %s", exp))!=EOF ){ //EOF = fim de arquivo
		incorreto = 0;
		tam = strlen(exp);
		inicializa_pilha(&pilha);
		for (i = 0; i<tam; i++){
			if(exp[i] == '(')
			push(&pilha, exp[i]);
			if(exp[i] == ')')
			if(!pop(&pilha, &e))
			{incorreto =1;
			break;
			}
		}
		if(!pilha_vazia(&pilha) || incorreto) printf("incorrect\n");
		else printf("correct\n");
	}
	return 0;
}