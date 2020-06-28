
/******************************************************************************

this is a different look at pow function, a recursive implementation of mine
I tested it through an online compiler in onlinegdb.com
the idea behind it is 4 ^ 4 = 16 ^ 2 and 3 ^ 5 = 3 * 9 ^ 2
we make base bigger and exp smaller and we end up in the base case sooner or later
I will be committing an iterative implementation to save stack space

----------------------

Added the iterative_pow implemenation too,
of course we can calculate the power by using a simple for loop
to 1 to n but I think this is faster because we loop log(N) time

*******************************************************************************/

#include <stdio.h>

double pow(double base, int exp) {
    if (exp < 0)
        return base = 1 / base, exp = -exp, pow(base, exp);
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base;
    
    if (exp % 2)
        return base * pow(base * base, exp / 2);
    
    return pow(base * base, exp / 2);
}


double iterative_pow(double base, int exp) {
    if (exp < 0) {
        base = 1 / base;
        exp = -exp;
    }
    
    double result = base;
    
    while (exp > 1) {
        if (exp % 2)
            result *= base * result;
        else
            result *= result;
        exp /= 2;
    }
    
    return result;
}


int main()
{
    printf("%f\n", pow(2, -2));
    printf("%f\n", pow(3, -3));

    return 0;
}
