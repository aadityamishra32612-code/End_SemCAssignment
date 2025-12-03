#include <stdio.h>
#include <ctype.h>

int main(void) {
    char *s = "Hello123";
    for (const char *p = s; *p; ++p) {
        if (isalpha((unsigned char)*p))
            putchar(*p);
    }
    putchar('\n'); 
    return 0;
}
