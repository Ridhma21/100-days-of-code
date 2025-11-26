//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, id, salary for employee %d: ", i + 1);
        scanf("%s %d %f", employees[i].name, &employees[i].id, &employees[i].salary);
    }

    FILE *fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fwrite(employees, sizeof(struct Employee), n, fp);
    fclose(fp);

    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Employee e;
    printf("\nEmployee Records:\n");
    while (fread(&e, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", e.name, e.id, e.salary);
    }
    fclose(fp);
    return 0;
}
