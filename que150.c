#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

int main() {

    struct Employee emp;          
    struct Employee *ptr = &emp; 
    ptr->id = 101;
    ptr->salary = 55000.75;
    printf("Employee Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
