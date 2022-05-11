#include <stdio.h>

int main() {
    typedef struct {char ch; } st;
    st s1 = {'c'};
    st s2 = s1;

    if (s1 == s2)
        printf("Successful");
    return 0;
}

