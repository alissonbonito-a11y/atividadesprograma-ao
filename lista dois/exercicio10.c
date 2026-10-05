#include<stdio.h>
int main(){
    char b;
      printf("digite um caractere:");
    scanf("%c",&b);
    if ((b >= 33 && b <= 126) && 
        !(b >= "0" && b <= "9") && 
        !(b >= "A" && b <= "Z") && 
        !(b >= "a" && b <= "z")) {
        printf("%c e um simbolo especial", b);
    }
     if (b >= "A" && b <= "Z"){
printf("letra maiuscula");
    
    }
    if (b >= "a" && b <= "z"){
        printf("letra minuscula");
    }
    if(b >= "0" && b <= "9"){
        printf("e um numero");

    }
   
    return 0;
}