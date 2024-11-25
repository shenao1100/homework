#include <stdio.h>

int main(){
    int matrix[5][5];
    int main_dia = 0;
    int first_dia = 0;
    int around = 0;
    printf("Input the matrix(5*5):\n");
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            scanf("%d", &matrix[i][j]);
            if (i == 4 || i == 0){
                around += matrix[i][j];
            }
        }
        if (i != 4 && i != 0){
            around += matrix[i][0] + matrix[i][4];
        }
        main_dia += matrix[i][i];
        first_dia += matrix[i][4-i];
        
    }
    printf("s1=%d,s2=%d,s3=%d", main_dia, first_dia, around);
    return 0;
    
}