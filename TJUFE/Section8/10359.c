#include <stdio.h>
int main(){
    printf("Input number of the students:");
    int count;
    scanf("%d", &count);
    printf("Input the scores(%d):\n", count);
    int score[count];
    for (int i=0; i<count; i++){
        scanf("%d", &score[i]);
    }
    int result[5] = {0, 0, 0, 0, 0};
    for (int i=0; i<count; i++){
        int s = score[i];
        if (s>=90){
            result[0]++;
        } else if (s>=80){
            result[1]++;
        } else if (s>=70){
            result[2]++;
        } else if (s>=60){
            result[3]++;
        } else{
            result[4]++;
        }
        
    }
    printf("A(90~100):%d\nB(80~89):%d\nC(70~79):%d\nD(60~69):%d\nE(<60):%d", 
        result[0], result[1], result[2], result[3], result[4]);
    printf("\nTotal:%d", count);
    return 0;
}