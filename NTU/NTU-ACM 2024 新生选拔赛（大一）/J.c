#include <stdio.h>
int main(){
    int count_a, count_b;
    scanf("%d %d", &count_a, &count_b);
    int arr_a[count_a], arr_b[count_b];
    for (int i = 0; i < count_a; i++) {
        scanf("%d", &arr_a[i]);
    }
    for (int i = 0; i < count_b; i++) {
        scanf("%d", &arr_b[i]);
        printf("%d ", arr_a[arr_b[i] - 1]);
    }


    return 0;
}