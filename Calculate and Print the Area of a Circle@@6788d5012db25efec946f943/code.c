#include<stdio.h>

int main () {
    float a;
    float Area;
    float b = 3.14;
    scanf("%f", &a);
    Area = (float)(b * a * a);
    printf("Area: %.2f", Area);
}