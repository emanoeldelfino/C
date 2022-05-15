#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char str[17] = "Testando strings!";
    int num[4] = {65, 66, 67, 68};

    char test_str[4] = {'a', 'b', 'c', 0};

    str[0] = 't';
    str[8] = '\0';

    printf("Teste -2 -> %s\n", "abc0abc");
    printf("Teste -1 -> %s\n", "abc\0abc");

    printf("Teste 0 -> %s\n", test_str);

    printf("Teste 1 -> %s\n", str);
    printf("Teste 2 -> %s\n", str + 9);

    printf("\n");

    printf("Teste 3 -> %c\n", *(str));
    printf("Teste 4 -> %c\n", *(str + 9));

    printf("\n");

    printf("Teste 5 -> %ls\n", num);
    printf("Teste 6 -> %ls\n", num + 2);

    printf("\n");

    printf("Teste 7 -> %d\n", *(num));
    printf("Teste 8 -> %d\n", *(num + 2));

    return EXIT_SUCCESS;
}

