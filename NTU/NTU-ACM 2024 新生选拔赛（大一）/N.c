#include <stdio.h>
#include <math.h>

long gcd(long a, long b) {
    // 上一题的最大公约数
    if (b != 0) {
        return gcd(b, a % b);
    } else {
        return a;
    }
}
typedef struct {
    long nt; // 分子
    long dt; // 分母
} Fraction;

void simplify(Fraction *frac) {
    // 化简
    long greatest_num = gcd(frac->nt, frac->dt);
    frac->nt /= greatest_num;
    frac->dt /= greatest_num;
}

int main()
{
    int count;
    int a, b, c, d, e, f, g, h;
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
        Fraction part1, part2;
        part1.nt = (a + b*c);
        part1.dt = b*d;
        simplify(&part1);

        part2.nt = (e + f*g);
        part2.dt = f*h;
        simplify(&part2);

        Fraction result;
        result.nt = part1.nt * part2.dt - part1.dt * part2.nt;
        result.dt = part1.dt * part2.dt;
        simplify(&result);
        
        long double sq_result = sqrt((double)result.nt / result.dt);
        printf("%.16Lf\n", sq_result);
    }
    return 0;
}