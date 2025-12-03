#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[] = "C Programming!";
    for (char *p = s; *p; ++p)
        *p = (char) toupper((unsigned char)*p);
    puts(s); 
    return 0;
}
