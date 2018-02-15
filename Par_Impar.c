#include<stdio.h>
int main(){
    int num1,num2,i;
    char res;
printf("Ingrese el primer numero: ");
scanf("%d",&num1);
printf("Ingrese el segundo numero: ");
scanf("%d",&num2);

printf("Ingrese P=par ,I=impar para ver el tipo de cada numero:\n ");
printf("estas bien hermosa bby ");
scanf(" %c",&res);

if(res=='p'||res=='P'){
    if(num1<num2){

            for(i=num1;i<=num2;i++){
                if(i%2==0){
                printf("%d ", i);
                }
            }
    }else{
                for(i=num2;i<=num1;i++){
                if(i%2==0){
                printf("%d ", i);
                }
            }
    }
}
if(res=='i'||res=='I'){
     if(num1<num2){

        for(i=num1;i<=num2;i++){
            if(i%2!=0){
            printf("%d ", i);
            }
        }
    }else{
            for(i=num2;i<=num1;i++){
            if(i%2!=0){
            printf("%d ", i);
            }
        }
    }

    }
}









