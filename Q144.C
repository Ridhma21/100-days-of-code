//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;
    printf("Enter name, roll number, marks: ");
    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);

    printStudent(s);
    return 0;
}
