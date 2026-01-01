#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a >= b && b >= c)
        printf("Maximum number = %d",a);
    else if(b >= a && b >= c)
        printf("Maximum number = %d",b);
    else
        printf("Maximum number = %d", c);
}