#include<stdio.h>

int main (){
    int a,b,c;
    int d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d = a + b + c;
    float e = d / 3;
    printf("Sum: %d", d);
    printf("Average: %.2f", e);
}