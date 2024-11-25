#include <stdio.h>

int not_has_float(float num){
    int num_int = (int)num;
    return (num_int == num);
}

int main(){
    float m, n;
    printf("x+2y+z=m\n3x+2y+2z=n\nInput m n:\n");
    scanf("%f %f", &m, &n);
    printf("   x   y   z");
    int answer_count = 0;
    for (float z=(3.0*m-n); z>=1.0; z-=1.0){
        float x, y;
        y = (m * 3.0 - n - z) / 4.0;
        x = m - 2.0*y - z;
        if (not_has_float(x) && not_has_float(y) && x > 0 && y > 0){
            answer_count++;
            printf("\n%4d%4d%4d", (int)x, (int)y, (int)z);
        }
    }
    if (answer_count == 0){
        printf("\nNo solution!");
    }
    return 0;
    
}