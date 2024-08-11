#include <stdio.h>
#include "source.h"

void count_sum(void) {
    // take two integers from the user
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
}
