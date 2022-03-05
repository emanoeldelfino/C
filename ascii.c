#include <stdio.h>

int main(int argc, char *argv[]) {
    // char chr;
    int i;
    for (i = 33; i < 127; i++) {
        printf("%-3d -> %c\n", i, i);
    }
}

