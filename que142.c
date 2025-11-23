#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\nName: %s\nRoll: %d\nMarks: %.2f\n",
               i + 1, students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
