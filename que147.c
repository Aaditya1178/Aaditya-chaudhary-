#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
} Employee;
void writeEmployeeData(const char *filename, Employee *employees, int numEmployees) {
    FILE *file = fopen(filename, "wb"); 
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }
    fwrite(employees, sizeof(Employee), numEmployees, file);

    fclose(file);
    printf("Employee data written to %s successfully.\n", filename);
}
void readEmployeeData(const char *filename) {
    FILE *file = fopen(filename, "rb"); 
    if (file == NULL) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }

    Employee emp;
    printf("\nEmployee Data from file:\n");
   
    while (fread(&emp, sizeof(Employee), 1, file) == 1) {
        printf("ID: %d, Name: %s, Designation: %s, Salary: %.2f\n",
               emp.id, emp.name, emp.designation, emp.salary);
    }

    fclose(file);
}
int main() {
    Employee employees[] = {
        {101, "Alice Smith", "Software Engineer", 75000.00},
        {102, "Bob Johnson", "Project Manager", 90000.00},
        {103, "Charlie Brown", "HR Specialist", 60000.00}
    };
    int numEmployees = sizeof(employees) / sizeof(Employee);
    const char *binaryFilename = "employees.bin";
    writeEmployeeData(binaryFilename, employees, numEmployees);

    readEmployeeData(binaryFilename);

    return 0;
}