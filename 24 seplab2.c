#include <stdio.h>

int main() {
    char str[100];
    int i;
    int a=0, d=0, s=0;  
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++) {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) {
            a++;
        } else if(str[i]>='0' && str[i]<='9') {
            d++;
        } else {
            s++;
        }
    }
    printf("alphabets = %d", a);
    printf("digits = %d", d);
    printf("special characters = %d", s);
    return 0;
}
