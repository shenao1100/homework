#include <stdio.h>
int star_mark(){
    for (int i=0; i<40; i++){
        printf("#");
    }
    return 0;
}

int main(){
    star_mark();
    printf("\nDear Zhang\n\n    Happy birthday to you!\n\nsincerely yours Wang\n\n");
    star_mark();
    return 0;
}