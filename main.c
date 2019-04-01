#include <stdio.h>
#include <stdlib.h>

#include "JPlib.h"

int main()
{
    int s, r, m;
    float d;
    long factA, factB;
    int a=0;
    int b=0;
    int opc;
    char msj[20]= "Ingrese un numero: ";
    char err[43]= "Error, debe respetar el rango. Reingrese: ";
    int band1 = 0;int band2 = 0;
    int bandC = 0;
    do
    {
        system("cls");
        printf("\n    --- C A L C U L A D O R A ---   ");
        printf("\n\nSeleccione las opciones en orden ascendente:");
        printf("\n\n1.- Ingresar Primer Operando: %d", a);
        printf("\n2.- Ingresar Segundo Operando: %d", b);
        printf("\n3.- Calcular todas las operaciones:");
        printf("\n4.- Informar Resultados:");
        printf("\n5.- Salir.");
        printf("\n\n     Nota: Solo permite el ingreso de numero enteros: (-32768 a 32767).\n\n");
        scanf("%d", &opc);
        switch(opc)
        {
            case 1:
                a = getInt(msj, err, -32768, 32767);
                band1 = 1;
                system("cls");
                break;
            case 2:
                b = getInt(msj, err, -32768, 32767);
                band2 = 1;
                system("cls");
                break;
            case 3:
                if(band1==1 && band2==1)
                {
                    s = suma(a,b);
                    r = resta(a,b);
                    m = producto(a,b);
                    d = cociente(a,b);
                    factA = fact(a);
                    factB = fact(b);
                    printf("Operaciones calculadas!\n");
                    bandC= 1;
                    system("pause");
                }else
                {
                    if(band1==0 || band2==0)
                    {
                        printf("\nFalto ingresar algun operando.\n");
                    }
                }
                break;
            case 4:
                if(bandC==1)
                {
                    informe(a, b, s, r, m, d, factA, factB);
                }else
                {
                    printf("\nNo se hicieron los calculos necesarios para dar el informe.\n");
                }
                system("pause");
                break;
            case 5:
                printf(" Hasta luego!!\n\n");
                break;
        }
    }while(opc!=5);
    return 0;
}
