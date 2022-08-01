#include <stdio.h>

typedef char * string;
typedef enum {false, true} boolean;

int main(int argc, char *argv[]) {
    boolean n1 = false;
    boolean n2 = true;
    string ok = "Ok\n";

    if (n1 && n2) {
        printf("Not %s", ok);
    } else {
        printf("%s", ok);
    }
}

