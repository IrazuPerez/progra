#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define limpia system("cls");

int x[1000];
int y[22];

int main()
{
    int i,n,repetido;
    float prom;
    srand(time(0));

    printf("Introdusca el numero de numeros\n(menor a 1000)\nNumero de numeros = ");
    scanf("%d", &n);
    limpia;

    for(i=0; i<n; i++){
        x[i]=rand()%20+1;
    }
    printf("Los numero son:\n");
    for(i=0; i<n; i++){
        printf("%d ", x[i]);
        prom=prom+x[i];
        y[x[i]]++;
    }
    prom=prom/n;
    repetido=1;
    for(i=2; i<=20; i++){
        if(y[repetido]<y[i])
        {
            repetido=i;
        }
    }
    printf("\nEl promedio es = %f\n", prom);
    printf("El mas repetido es = %d", repetido);

    return 0;
}

