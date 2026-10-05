#include <stdio.h>
int main(){
int senha=222;
int senhauser;
printf("digite sua senha:");
scanf("%d",&senhauser);


if(senhauser==senha){
    printf("acesso permitido");
}
else{
printf("acesso negado");
}
    return 0;
}