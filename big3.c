#include <stdio.h>
int biggest3(int a, int b, int c) {

    // Finding max using compound expressions
    if (a >= b && a >= c)
        printf("%d is the largest number.", a);
    else if (b >= a && b >= c)
        printf("%d is the largest number.", b);
    else
        printf("%d is the largest number.", c);

    return 0;
}
