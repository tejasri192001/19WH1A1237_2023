#include <stdio.h>

int main() {
    int n;
    printf(" Enter the size : ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n; j++){
            if(j == n-i-1 || j == n+i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int i = n-1; i > 0; i--){
        for(int j = 0; j < 2*n; j++){
            if(j == n-i || j == n+i-2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
