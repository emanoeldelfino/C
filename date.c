#include <stdio.h>

int main(int argc, char *argv[]) {
    int day, month, year;

    printf("Enter day/month/year: ");
    scanf("%2d %*c %2d %*c %4d", &day, &month, &year);

    printf("Day: %d\n", day);
    printf("Month: %d\n", month);
    printf("Year: %d\n", year);
}
