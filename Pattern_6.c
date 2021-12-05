#include <stdio.h>

int main() {
    int n;
    printf(" Enter the size : ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j < i)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}
