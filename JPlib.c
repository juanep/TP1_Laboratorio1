#include <stdio.h>
#include <stdlib.h>

int getInt(char ing[], char err[], int inf, int sup)
{
    int x;
    printf("%s", ing);
    scanf("%d", &x);
    while(x<inf || x>sup)
    {
        printf("%s", err);
        scanf("%d", &x);
    }
    return x;
}

long fact(int x)
{
    int i, f;
    if(x==1 || x==0)
    {
        f = 1;
    }
    for(i=1;i<x; i++)
    {
        f = (long)x * fact(x - 1);
    }
    return f;
}

int sumar(int x, int y)
{
    int rdo;
    rdo = x + y;
    return rdo;
}

int restar(int x, int y)
{
    int rdo;
    rdo = x - y;
    return rdo;
}

 int multiplicar(int x, int y)
{
    int rdo;
    rdo = x * y;
    return rdo;
}

float dividir(int x, int y)
{
    float rdo;
    rdo =  x / (float) y;
    return rdo;
}

void informe(int x, int y, int r1, int r2, int r3, float r4, long r5, long r6)
{
    printf("La suma de %d + %d es: %d", x, y, r1);
    printf("\nLa resta de %d - %d es: %d", x, y, r2);
    printf("\nEl producto de %d * %d es: %d", x, y, r3);
    if(x==0 || y==0)
    {
        printf("\nEl cociente de %d / %d es: El cero no es divisor!", x, y);
    }else
    {
        printf("\nEl cociente de %d / %d es: %.2f", x, y, r4);
    }
        if(x<0 && y>=0)
    {
        printf("\nEl factorial de %d es: No se puede calcular el factorial de un numero negativo.", x);
        printf("\nEl factorial de %d es: %ld \n", y, r6);
    }else
    {
        if(x>=0 && y<0)
        {
            printf("\nEl factorial de %d es: No se puede calcular el factorial de un numero negativo.", y);
            printf("\nEl factorial de %d es: %ld \n", x, r5);
        }else
        {
            if(x<0 && y<0)
            {
                printf("\nTanto %d como %d son numeros negativos, por lo que no se puede calcular su factorial.\n", x, y);
            }else
            {
                printf("\nEl factorial de %d es: %ld  ; y el factorial de %d es: %ld \n", x, r5, y, r6);
            }
        }
    }
}
