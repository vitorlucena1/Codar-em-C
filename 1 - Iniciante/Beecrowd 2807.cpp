#ifndef PILHA_H
#define PILHA_H
#include <iostream>
#define MAX_PILHA 100
using namespace std;

typedef int tp_item;

typedef struct{
    int topo;
    tp_item item[MAX_PILHA];
} tp_pilha;

// inicia uma pilha, atribuindo -1 ao topo
void inicializa_pilha(tp_pilha *p){
    p->topo = -1;
}

// vê se a pilha está vazia, retornando 1 se estiver vazia ou 0, caso contrário
int pilha_vazia(tp_pilha *p){
    if (p->topo == -1)
        return 1;
    return 0;
}

// vê se a pilha tá cheia, retornando 1 se estiver cheia ou 0, caso contrário
int pilha_cheia(tp_pilha *p){
    if (p->topo == MAX_PILHA - 1)
        return 1;
    return 0;
}

// Empilha um elemento
int push(tp_pilha *p, tp_item e){
    if (pilha_cheia(p))
        return 0;
    p->topo++;
    p->item[p->topo] = e;
    return 1;
}

// Desempilha um elemento
int pop(tp_pilha *p, tp_item *e){
    if (pilha_vazia(p))
        return 0;
    *e = p->item[p->topo];
    p->topo--;
    return 1;
}
int altura_pilha(tp_pilha *p){
    return p->topo + 1;
}

void imprime_pilha(tp_pilha p){
	int cont=altura_pilha(&p);
    tp_item e;
    while (pilha_vazia(&p) == 0){
        pop(&p, &e);
		if(cont-1==0)
        cout<<e;
		else
		cout<<e<<" ";
		cont--;
    }
}
#endif

int main(){
int num;

cin>>num;
tp_pilha pilha;
inicializa_pilha(&pilha);

long int a=1, b=0, fib;

for(int i=1;i<=num;i++){
    fib=a+b;
    a=b;
    b=fib;
    push(&pilha, fib);
}

imprime_pilha(pilha);
cout<<endl;

return 0;
}