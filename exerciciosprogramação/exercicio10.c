#include<stdio.h>
int main(){
printf("Digite um caractere:");
char letra;
scanf("%c", &letra);
printf("caractere: %c, Valor ASCII:%d\n",letra,(int)letra);
 
printf("Digite um numero inteiro:");
int num;
scanf("%d", &num);
printf("inteiro: %d, como float:%f \n como double:%.10f\n", num,(float)num,(double)num);

printf("\ndigite um numero decimal:");
float num3;
scanf("%f",&num3);
printf("float:%f, como inteiro:%d", num3,(int)num3);

 printf("\ndigite um numero decimal(double):");
double num4;
scanf("%lf", &num4);
printf("double:%.10f, como float:%f", num4,(float)num4);

    return 0;
}