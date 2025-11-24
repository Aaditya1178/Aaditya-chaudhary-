#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter employee id: ");
    scanf("%d", &emp.id);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s", emp.name); 
    printf("ID: %d\n", emp.id);
    printf("Joining Date: %02d-%02d-%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
