#include <stdio.h>

int main(void) {
    FILE *fp = fopen("output.txt", "w");
    if (!fp) {
        perror("fopen");
        return 1;
    }
    fprintf(fp, "Hello file!\n");
    fclose(fp);
    return 0;
}
