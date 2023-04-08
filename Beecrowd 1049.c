#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char n[50]; 
	scanf(" %s", n);
	if(strcmp(n, "vertebrado")== 0){
		scanf(" %s", n);
			if(strcmp(n, "ave")== 0){
				scanf(" %s", n);
				if(strcmp(n, "carnivoro")==0){
					printf("aguia\n");
				}
				else{
					printf("pomba\n");
				}
			}
			else{
				
					scanf(" %s", n);
					if(strcmp(n, "onivoro")==0){
						printf("homem\n");
					
					}else{
						printf("vaca\n");
					}
				
			}
	}
	else{
		scanf(" %s", n);
		if(strcmp(n, "inseto")== 0){
			scanf(" %s", n);
			if(strcmp(n, "hematofago")==0){
				printf("pulga\n");
			}
			else{
				printf("lagarta\n");
			}
		}else{
				scanf(" %s", n);
				if(strcmp(n, "hematofago")==0){
					printf("sanguessuga\n");
				}
				else{
					printf("minhoca\n");
				}
		}
	}
	
	return 0;
}