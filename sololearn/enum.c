#include <stdio.h>

typedef int num;
typedef char str[30];

typedef enum {
    it = 1,
    hr = 2,
    finance = 3,
} department;

typedef struct {
    str name;
    num age;
    department dep;
} employee;

char * get_dep_str(department dep) {
    switch (dep) {
        case it:
            return "Information Technology";
        case hr:
            return "Human Resources";
        case finance:
            return "Finance";
        default:
            return "Invalid department";
    }
}

int main(int argc, char *argv[]) {
    int dep;
    employee emp;

    printf("Name: ");
    scanf("%30s", emp.name);

    printf("Age: ");
    scanf("%d", &emp.age);

    do {
        printf("Department (1 - it, 2 - hr, 3 - finance): ");
        scanf("%d", &dep);
    } while (dep < 1 || dep > 3);

    emp.dep = dep;

    printf("\nEmployee information: \n");
    printf("Name: %s.\n", emp.name);
    printf("Age: %d.\n", emp.age);
    printf("Department: %s.\n\n", get_dep_str(emp.dep));
}

