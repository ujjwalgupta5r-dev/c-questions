#include <stdio.h>

int main() {
    FILE *source, *dest;
    char ch;
    char src[50], dst[50];

    printf("enter source file name: ");
    scanf("%s", src);

    printf("enter destination file name: ");
    scanf("%s", dst);

    source = fopen(src, "r");
    if (source == NULL) {
        printf("source file not found");
        return 0;
    }

    dest = fopen(dst, "w");
    if (dest == NULL) {
        printf("cannot create destination file");
        fclose(source);
        return 0;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("file copied successfully");

    fclose(source);
    fclose(dest);

    return 0;
}
