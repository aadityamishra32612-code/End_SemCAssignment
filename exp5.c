#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t n = 5;
    int *arr = malloc(n * sizeof *arr);
    if (!arr) { perror("malloc"); return 1; }
    for (size_t i = 0; i < n; ++i) arr[i] = (int)i * 2;
    for (size_t i = 0; i < n; ++i) printf("%d ", arr[i]);
    putchar('\n');
    free(arr);
    return 0;
}
