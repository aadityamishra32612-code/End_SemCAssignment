#include <stdio.h>
#include <time.h>

int main(void) {
    time_t now = time(NULL);
    if (now == (time_t)-1) { perror("time"); return 1; }

    struct tm *lt = localtime(&now);
    if (!lt) { perror("localtime"); return 1; }

    printf("Now: %04d-%02d-%02d %02d:%02d:%02d\n",
        lt->tm_year + 1900, lt->tm_mon + 1, lt->tm_mday,
        lt->tm_hour, lt->tm_min, lt->tm_sec);
    return 0;
}
