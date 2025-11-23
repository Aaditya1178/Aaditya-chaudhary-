#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student findTopStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex];
}

int main() {
    struct Student students[5] = {
        {"Alice", 101, 89.5},
        {"Bob", 102, 95.0},
        {"Charlie", 103, 78.0},
        {"David", 104, 85.5},
        {"Eva", 105, 92.0}
    };

    struct Student topStudent = findTopStudent(students, 5);

    printf("Top Student:\nName: %s\nRoll: %d\nMarks: %.2f\n",
           topStudent.name, topStudent.roll, topStudent.marks);

    return 0;
}
