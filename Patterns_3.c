#include <stdio.h>

int main() {
    int n;
    int arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    printf(" Enter the size : ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%c ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
