#include <iostream>
#include <string.h>
using namespace std;

int main(){
int quant, boneco, arquiteto, musico, desenho, horas_b=0, horas_arq=0, horas_mus=0, horas_des=0;
cin>>quant;

for(int i=0; i<quant; i++){
char nome[50];
cin>>nome;

char grupo[15];
cin>>grupo;

if(strcmp(grupo, "bonecos")==0){
cin>>boneco;
horas_b+=boneco;
}

if(strcmp(grupo, "arquitetos")==0){
cin>>arquiteto;
horas_arq+=arquiteto;
}

if(strcmp(grupo, "musicos")==0){
cin>>musico;
horas_mus+=musico;
}

if(strcmp(grupo, "desenhistas")==0){
cin>>desenho;
horas_des+=desenho;
}
}

cout<<((horas_b/8) + (horas_arq/4) + (horas_des/12) + (horas_mus/6))<<"\n";

return 0;
}