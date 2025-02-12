#include<stdio.h>

int main () {
    int a;
    float Area;
    float b = 3.14;
    scanf("%d", &a);
    Area = (float)(b * a * a);
    printf("Area: %.2f", Area);
}