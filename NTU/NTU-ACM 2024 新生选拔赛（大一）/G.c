#include <stdio.h>
#include <math.h>


int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++) {
        int n, m, tmp;
        int res[3] = {0,0,0};
        scanf("%d %d",&n,&m);
        for(int j=0;j<n;j++) {
            scanf("%d",&tmp);
            if (tmp>m) {
                res[1]++;
            }else if (tmp<m) {
                res[2]++;
            }else {
                res[0]++;
            }
        }
        printf("%d %d %d\n", res[0], res[1], res[2]);
    }

    return 0;
}