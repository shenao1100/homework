#include <stdio.h>
int main(){
    printf("Input number of the students:");
    int count;
    scanf("%d", &count);
    int score[count+1][4];
    char name[count][5];
    for (int i=0; i<4; i++){
        score[count][i] = 0;
    }
    int last_avg_sum = 0;
    printf("Input student data:\n");
    for (int i=0; i<count; i++){
        printf("-%d- Name:", i+1);
        scanf("%s", &name[i]);
        printf("-%d- 3 scores:", i+1);
        scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
        score[i][3] = (score[i][0] + score[i][1] + score[i][2]) / 3;
        last_avg_sum += score[i][0] + score[i][1] + score[i][2];
        score[count][0] += score[i][0];
        score[count][1] += score[i][1];
        score[count][2] += score[i][2];
        score[count][3] += score[i][3];
    }
    printf("\n Name Chi. Mat. Eng. Avg.\n");
    for (int i=0; i<count; i++){
        printf("%5s%5d%5d%5d%5d\n", name[i], score[i][0], score[i][1], score[i][2], score[i][3]);
    }
    printf("Total%5d%5d%5d%5d", score[count][0] / count, score[count][1] / count, score[count][2] / count, last_avg_sum / (count*3));
    return 0;
}