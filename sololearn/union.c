#include <stdio.h>

typedef union {
    int int_num;
    float fl_num;
    char str[20];
} nums;

void print_union(nums *n) {
    printf("%d\t%f\t%s\n", n -> int_num, n -> fl_num, n -> str);
}

int main(int argc, char *argv[]) {
    nums n;

    n.int_num = 42;
    print_union(&n);

    n.int_num = 65;
    print_union(&n);
}

