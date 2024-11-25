#include <stdio.h>
int main(){
    int matrix[5][3];
    int sum_line[5];
    int sum, max_line;
    int max = 0;
    printf("Input matrix(5*3):\n");
    for (int i=0; i<5; i++){
        sum = 0;
        for (int j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        sum_line[i] = sum;
        if (sum > max){
            max = sum;
            max_line = i;
        }
    }
    for (int i=0; i<5; i++){
        printf("sum of line %d is :%d\n", i+1, sum_line[i]);
    }
    int tmp;
    for (int j=0; j<3; j++){
        tmp = matrix[0][j];
        matrix[0][j] = matrix[max_line][j];
        matrix[max_line][j] = tmp;
    }
    printf("The new matrix is :\n");
    for (int i=0; i<5; i++){
        for (int j=0; j<3; j++){
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}