#include <stdio.h>
#include <stdlib.h>

void * doubleIt(const void * num);

int main(int argc, char *argv[]) {
    int n1, *n1_double;
    float n2, *n2_double;

    printf("Integer number: ");
    scanf("%d", &n1);

    printf("Decimal number: ");
    scanf("%f", &n2);

    n1_double = (int *) doubleIt(&n1);
    n2_double = (float *) doubleIt(&n2);

    printf("Double of numbers:\n");
    printf("Integer: %d\n", *n1_double);
    printf("Decimal: %.1f\n", *n2_double);

    free(n1_double);
    free(n2_double);
}

void * doubleIt(const void * num) {
    float *result = malloc(sizeof(float));
    *result = (*(float *)num * (float)2);
    return result;
}

