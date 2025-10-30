#include <stdio.h>

int main() {
    FILE *f;
    int count;

    f = fopen("ujjwal_count.txt", "r");
    if (f == NULL) {
        count = 1;
    } else {
        fscanf(f, "%d", &count);
        count++;
        fclose(f);
    }

    printf("hey ujjwal this program has run %d times.", count);

    f = fopen("ujjwal_count.txt", "w");
    fprintf(f, "%d", count);
    fclose(f);

    return 0;
}
