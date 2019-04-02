#include <stdio.h>
#include <stdlib.h>

#include "JPlib.h"

int main()
{
    int suma, resta, producto;
    float cociente;
    long factA, factB;
    int num1 = 0;
    int num2 = 0;
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
        printf("\n\n1.- Ingresar Primer Operando: %d", num1);
        printf("\n2.- Ingresar Segundo Operando: %d", num2);
        printf("\n3.- Calcular todas las operaciones:");
        printf("\n4.- Informar Resultados:");
        printf("\n5.- Salir.");
        printf("\n\n     Nota: Solo permite el ingreso de numero enteros: (-32768 a 32767).\n\n");
        printf("Opcion: ");
        scanf("%d", &opc);
        switch(opc)
        {
            case 1:
                num1 = getInt(msj, err, -32768, 32767);
                band1 = 1;
                break;
            case 2:
                num2 = getInt(msj, err, -32768, 32767);
                band2 = 1;
                break;
            case 3:
                if( band1 == 1 && band2 == 1)
                {
                    suma = sumar(num1,num2);
                    resta = restar(num1,num2);
                    producto = multiplicar(num1,num2);
                    cociente = dividir(num1,num2);
                    factA = fact(num1);
                    factB = fact(num2);
                    printf("Operaciones calculadas!\n");
                    bandC= 1;
                }else
                {
                    if( band1 == 0 || band2 == 0)
                    {
                        printf("\nFalto ingresar algun operando.\n");
                    }
                }
                break;
            case 4:
                if(bandC==1)
                {
                    informe(num1, num2, suma, resta, producto, cociente, factA, factB);
                }else
                {
                    printf("\nNo se hicieron los calculos necesarios para dar el informe.\n");
                }
                break;
            case 5:
                printf("\nHasta luego!!\n\n");
                break;
            default:
                printf("\nOpcion invalida!\n\n");
        }
        system("pause");
    }while(opc!=5);
    return 0;
}
