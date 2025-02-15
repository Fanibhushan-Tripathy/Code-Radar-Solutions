#include<stdio.h>

int main() {
    int c; 
    scanf("%d", &c);
    int totsum = 0;
    for (int i = 0; i < c; i++) {
        for (int j = 1; j <= i; j++) {
            totsum += 1;
            printf("%d ", totsum);
        }
        printf("\n");
    }
}