#include <stdio.h>

int main(int argc, char *argv[]) {
    char texto[14] = "Oi, tudo bem?";
                   //   ^
    texto[0] = 'A'; //  |
    texto[2] = 'o'; //  |
    texto[3] = 59; // --+

    printf("Texto -> %s\n", texto);
    printf("Mais texto -> %s\n", texto + 5);
    printf("Mais texto -> %s\n", &texto[5]);

    return 0;
}

