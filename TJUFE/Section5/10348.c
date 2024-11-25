#include <stdio.h>


int main(){
    printf("Input the number of matches:");
    int match_count, total_score;
    scanf("%d", &match_count);
    printf("\nInput the score:");
    scanf("%d", &total_score);
    int win, even;
    int solve_count = 0;
    // total_score = win*3 + even*1 + fail*0
    int max_win = (int)(total_score / 3);
    for (win = 0; win <= max_win; win++){
        even = total_score - win*3;
        
        if ((win*3 + even*1) == total_score && (even+win) <= match_count){
            solve_count++;
            printf("\nwin:%d,draw:%d,fail:%d", win, even, match_count - win - even);
        } else if (even > match_count){
            continue;
        }
    }
    if (solve_count == 0){
        printf("\nNo solution!");
    }
    return 0;
}