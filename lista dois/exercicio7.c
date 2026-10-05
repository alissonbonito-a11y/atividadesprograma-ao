#include<stdio.h>
int main(){
int a=1, b=2, c=3;
if (a>b){
if (b>c){
    printf("%d,%d,%d",a,b,c);
}
else if(a>c){
    printf("%d,%d,%d",a,c,b);
    }
        else{
    printf("%d,%d,%d",c,a,b);
}
}
else if(b>c){
    if(a>c){
printf("%d,%d,%d",b,a,c);
    }
else{
    printf("%d,%d,%d",c,b,a);
}
}
else{
    printf("%d,%d,%d",b,c,a);
}


    return 0;
}