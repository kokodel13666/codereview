#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d",&n);
    if (n <= 0){
        printf("n/a");
        return 1;
    }
    int matrix_a[n][n];
    int matrix_b[n][n];
    int matrix_c[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d",&matrix_a[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d",&matrix_b[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrix_c[i][j] = 0;
            for (int k = 0; k < n; k++){
                matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d",matrix_c[i][j]);
            if(j < n-1){
                printf(" ");
            }
        }
        if (i < n-1){
            printf("\n");
        }
    }
    return 0;
}