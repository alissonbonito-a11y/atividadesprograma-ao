#include<stdio.h>
int main(){
float nota1=1.4;
float nota2= 2.3;
float media =(float) (nota1+nota2)/2;
if (media>=6.0){
    printf("aprovado");
}
else if (media<3.0){
    printf("reprovado");
}
else{
    printf("recuperaçao");
}
    return 0;
}