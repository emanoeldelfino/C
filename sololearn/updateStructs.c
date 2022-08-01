#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char title[40];
    float hours;
} course;

void update_course(course *class);
//void display_course(course class);
void display_course(course *class);

int main(int argc, char *argv[]) {
    course cs2;
    update_course(&cs2);
    //display_course(cs2);
    display_course(&cs2);

    return 0;
}

void update_course(course *class) {
    strcpy(class -> title, "C Fundamentals");
    class -> id = 111;
    class -> hours = 12.3;
}

//void display_course(course class) {
//    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
//}

void display_course(course *class) {
    printf("%d\t%s\t%3.2f\n", class -> id, class -> title, class -> hours);
}

