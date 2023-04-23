#include<stdio.h>
#include<stdlib.h>

int main()
{
    float temp1, temp2, numero;
    int i=0, X;

    while(1)
    {
        scanf("%f", &numero);

        if(numero>=0 && numero<=10){
            if(i==1){
                temp2 = numero;
                printf("media = %.2f\n", (temp1+temp2)/2);
                i=0;
                scanf("%d", &X);
                printf("novo calculo (1-sim 2-nao)\n");

                while(X<1 || X>2){
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &X);
                    if(X==1)
                        break;
                    else if(X==2)
                        exit(0);
                }

                if(X==1)
                        continue;
                else if(X==2)
                    break;

            }else{
                temp1 = numero;
                i++;
            }
        }
        else
            printf("nota invalida\n");

    }



    return 0;
}