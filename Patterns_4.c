#include <stdio.h>

int main() {
    int n;
    printf(" Enter the size : ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    for(int i = n-1; i > 0; i--){
        for(int j = i; j <= n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
