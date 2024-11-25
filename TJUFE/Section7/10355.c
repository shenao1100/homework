#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[20];
    int count = 0;
    int temp;
    double sum = 0.0;
    printf("Please input 20 integers!(>0)\n");
    while (count < 20){
        scanf("%d", &temp);
        if (temp > 0){
            arr[count] = temp;
            sum += temp;
            count++;
            
        }
    }
    double avg = sum / count;
    printf("The average is %.6lf\ngap:", avg);
    for (int i=0; i<count; i++){
        if (arr[i] > avg){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}