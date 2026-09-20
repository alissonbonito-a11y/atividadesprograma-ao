#include <stdio.h>
int main (){
int x=2;
int y=3;
int z;
z=x;
x=y;
y=z;

printf("%d %d ", x, y);
    return  0;
}