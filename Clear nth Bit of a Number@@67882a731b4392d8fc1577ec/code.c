#include<stdio.h>

int main() {
    int numb, shft;
    scanf("%d", &numb);
    int finAns = (numb & ~(1 << (shft - 1)));
    printf("finAns %d", finAns);
}