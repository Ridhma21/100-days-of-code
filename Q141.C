//Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter name, roll number, marks: ");
    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);

    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}
