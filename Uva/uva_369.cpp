#include <stdio.h>

int main ()
{
    double n, fact, r, fact1, fact2, sum, i, s;

    while (scanf ("%lf %lf", &n, &r)== 2){
        if (n == 0 && r == 0)
            break;
        fact = fact1 = fact2 = 1;
        for (i = 1; i <= n; i++){
                fact*=i;
        }

        for (i = 1; i <= r; i++){
                fact1*=i;
        }

        s = n - r;

        for (i = 1; i <= s; i++){
                fact2*=i;
        }

        sum = fact / ( fact2 * fact1);


        printf("%0.lf things taken %0.lf at a time is %0.lf exactly.\n", n, r, sum);
    }

    return 0;
}
