#include<stdio.h>

int main() {
    int a;
    char c[20] = "Prime";
    scanf("%d", &a);
    for(int i = 2; i < a; i++) {
        int b = a % i;
        if (b == 0){
            c = "Not Prime";          
            break;
        }
    }
    printf("%s", c);
}