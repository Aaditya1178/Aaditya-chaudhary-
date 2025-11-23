#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student1 = {"Alice", 101, 89.5};
    printStudent(student1);
    return 0;
}
