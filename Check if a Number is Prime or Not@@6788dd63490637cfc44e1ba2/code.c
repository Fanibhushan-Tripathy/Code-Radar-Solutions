#include<stdio.h>
#include<string.h>

int main() {
    int a;
    char c[20] = "Prime";
    scanf("%d", &a);
    for(int i = 2; i < a; i++) {
        int b = a % i;
        if (b == 0){
            strcpy(c, "Not Prime");  
            break;
        }
    }
    printf("%s", c);
}