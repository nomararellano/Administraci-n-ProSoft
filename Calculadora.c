#include<stdio.h>

int main(){
int a,b,option;
printf("\t\tCALCULADORA\n");

do{
    printf("\n Selecciona una opcion\n");

    printf("1- SUMAR\n");
    printf("2- RESTAR\n");
    printf("3.-MULTIPLICAR\n");
    printf("3- Salir\n");

    printf("\nOpcion:");
    scanf("%d" ,&option);

    switch(option){

 case 1:
    printf("\nIngresa el primer numero: ");
    scanf("%d" ,&a);
    printf("\nIngresa el primer numero: ");
    scanf("%d" ,&b);
    printf("\nLA SUMA DE LOS NUMEROS ES:  %d  \n" ,a+b);
    system("pause");
    system("cls");
    break;
 case 2:
    printf("\nIngresa el primer numero: ");
    scanf("%d" ,&a);
    printf("\nIngresa el primer numero: ");
    scanf("%d" ,&b);
    printf("\nLA RESTA DE LOS NUMEROS ES:  %d  \n" ,a-b);
    system("pause");
    system("cls");
    break;
 case 3: 
    printf("\nIngresa el primer numero: ");
    scanf("%d" ,&a);
    printf("\nIngresa el primer numero: ");
    scanf("%d" ,&b);
    printf("\nLA MULTIPLICACION DE LOS NUMEROS ES:  %d  \n" ,a*b);
    system("pause");
    system("cls");
    break;
    }
    
} while(option!=3);

printf("\nADIOS");
return 0;

}
