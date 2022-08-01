#include <stdio.h>

typedef struct {
    char name[50];
    int number;
    int age;
} student;

void showStudentData(student *st) {
    printf("\nStudent:\n");
    printf("Name: %s\n", st -> name);
    printf("Number: %d\n", (*st).number);
    printf("Age: %d\n", st -> age);
}

int main(int argc, char *argv[]) {
    student st1 = {"Krishna", 5, 21};
    showStudentData(&st1);
}

