#include <stdio.h>
int main()
{
    int para, tmp_words_count, tmp_char_count, tmp_char;
    scanf("%d",&para);
    for (int i = 0; i < para; i++) {
        scanf("%d",&tmp_words_count);
        for (int j = 0; j < tmp_words_count; j++) {
            scanf("%d",&tmp_char_count);
            for (int k = 0; k < tmp_char_count; k++) {
                scanf("%d",&tmp_char);
                printf("%c",(char)(tmp_char + 64));
            }
            if (j != tmp_words_count - 1) {
                printf(" ");
            }

        }
        if (i != para - 1) {
            printf("\n");
        }
    }
    return 0;
}