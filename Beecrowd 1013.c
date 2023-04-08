#include <stdio.h>
#include <stdlib.h>


int main() {
	int a, b, c, MaiorAB;
	scanf("%d %d %d", &a, &b, &c);
	MaiorAB = ((a+b+abs(a-b))/2);
	if(a > b){
		if(a > c){
			printf("%d eh o maior\n", a);	
		
		} else{
				printf("%d eh o maior\n", c);
		}
	} else{
			if(b > c){
				printf("%d eh o maior\n", b);
			} else{
					printf("%d eh o maior\n", c);
			}
	}
	
	return 0;	
	
	}