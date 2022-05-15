#include <stdio.h>
#include <string.h>

int main() {
    char str[666];
    char * x = str + 4;
    strcpy ( str, "Hello world!" );

    str[5] = "";

    //while ( *x ) {
    //    *x ++ = 0;
    //    printf("test\n");
    //}
    printf("%s\n", str );

    int i;
    for (i = 0; i < 1000; i++) {
        printf("%d -> %d -> %c\n", i, *(i + str), *(i + str));
    }
}

