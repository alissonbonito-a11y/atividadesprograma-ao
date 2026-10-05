#include <stdio.h>
int main(){
int ano=2023;
if ((ano %4 ==0 && ano  %100 !=0)|| ano %400 ==0){
printf("temos um ano bissexto");
}
 else{
    printf("nao temos um ano bissexto");
 }
    return 0;
}