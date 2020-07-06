
#include <stdio.h>

#define create_max_function(type)            \
            type max##type(type t1, type t2) \
            {                                \
                return t1 > t2 ? t1 : t2;    \
            }

create_max_function(int);
create_max_function(double);

int main()
{
    int iresult = maxint(12, 34);
    double dresult = maxdouble(3.15443, 1.23446);

    printf("%d %f", iresult, dresult);

    return 0;
}
