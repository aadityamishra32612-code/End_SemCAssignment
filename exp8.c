#include <stdio.h>
#include <stdarg.h>

int sum_ints(int count, ...) {
    int total = 0;
    va_list ap;
    va_start(ap, count);
    for (int i = 0; i < count; ++i)
        total += va_arg(ap, int);
    va_end(ap);
    return total;
}

int main(void) {
    printf("%d\n", sum_ints(4, 1, 2, 3, 4)); 
    return 0;
}
