#include<stdio.h>

int main() {
    int count;
    scanf("%d", &count);
    int totsum = 0;
    for(int i = 1; i < =count; i++) {
        totsum += i;
    }
    printf("%d", totsum);
}