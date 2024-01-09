#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void alturas(int calle, int altura, int numero, int altura1, int altura2, int m);
int main()
{
    int calle=1;
    char almacen[10];
    char altura[10];
    int numero, altura1, altura2,m;

    while(calle!=0)
    {
        printf("ingrese la calle \n");
        scanf("%d", &calle);
        if(calle<2 || calle>225) /// si numero es menor igual 0 o calle igual a 0 hace lo siguiente
        {
            printf(" ERROR CRITICO \n"); ///si lo es salta error
            calle=0;
            continue; ///el ciclo va a a volver a empezar y como calle es 0 se termina automaticamente
        }
        printf("ingrese la altura \n");
        scanf("%s",altura);
        strncpy(almacen, altura,2); ///copio lo dos primeros digitos en almacen
        numero = atoi(almacen); ///paso los valores de la cadena char a una variable int
        m=atoi(altura);
        numero=numero*2; ///multiplico los dos digitos por 2
        alturas(calle, altura, numero, altura1, altura2, m);
        if(numero<1 || m>4998)
        {
            printf(" ERROR CRITICO \n"); ///si lo es salta error
            calle=0;
        }
    }
    return 0;
}

void alturas(calle, altura, numero, altura1, altura2, m){

        if(calle%2==0 && numero>0 && calle>1 && calle<226 && m>1 && m<5000)
        {
            altura1=numero+1; ///formula para encontrar la altura si es par
            altura2=altura1+2;
            printf("entre %d",altura1);///imprime las alturas
            printf(" y %d\n",altura2);
        }
        else if(calle%2>0 && numero>0 && calle>1 && calle<226 && m>1 && m<5000)
        {
            altura1=numero+6; ///formula para encontrar la altura si es impar
            altura2=altura1+2;
            printf("entre %d",altura1); ///imprime la altura
            printf(" y %d\n",altura2);
        }
    return 0;
}