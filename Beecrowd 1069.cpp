#ifndef PILHA_H
#define PILHA_H
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


#endif

int main(){
	tp_pilha pilha;
	tp_item e;
	int i, tam, qtdiam, qtde, j;
	char diamante[1001];
	cin >> qtde;

	for (i = 0; i < qtde; i++){
		scanf(" %[^\n]s", diamante);
		tam = strlen(diamante);
		qtdiam = 0;
		inicializa_pilha(&pilha);
		for (j=0; j<tam; j++){
			switch (diamante[j]){
				case '<': push(&pilha, diamante[j]); // correção aqui
				break;
				case '>': if(pop(&pilha, &e)){
					qtdiam++;
				}
				break;
			}//fim do switch
		}
			cout << qtdiam <<"\n";//fim do for interno
	}

	return 0;
}