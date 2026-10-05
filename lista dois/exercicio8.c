#include<stdio.h>
int main(){
int lado1=5, lado2=5,lado3 =4;
if (lado1+lado2<=lado3 || lado1+lado3<=lado2 || lado2+lado3<=lado1) {
    printf("nao e um triangulo");
}
else if (lado1==lado2 && lado2==lado3) {
    printf("triangulo equilatero");
}
else if (lado1==lado2 || lado2==lado3 || lado3==lado1) {
    printf("triangulo isosceles");
}
else {
    printf("triangulo escaleno");
}
    return 0;
}