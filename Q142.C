//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
