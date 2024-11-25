#include <stdio.h>

struct employee
{
    int num;
    char name[10];
    int workyear;
    char sex;
    char posi[10];
    int wage;
};
int main(){
    printf("Input the number of employee:");
    int count;
    scanf("%d", &count);
    struct employee elp[count];
    printf("Input %d employee information(num name workYear sex position wage):", count);
    for (int i=0; i<count; i++){
        scanf("%d", &elp[i].num);
        scanf("%s", &elp[i].name);
        scanf("%d", &elp[i].workyear);
        scanf(" %c", &elp[i].sex);
        scanf("%s", &elp[i].posi);
        scanf("%d", &elp[i].wage);
    }
    int sum=0;
    for (int i=0; i<count; i++){
        sum += elp[i].wage;
    }
    printf("\naverage wage is: %d", sum / count);
    return 0;
}