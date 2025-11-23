#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    printf("\nStudent with Highest Marks:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n",
           students[maxIndex].name, students[maxIndex].roll, students[maxIndex].marks);

    return 0;
}
