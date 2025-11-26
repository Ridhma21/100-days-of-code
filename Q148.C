//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;
    printf("Enter name, roll number, marks for first student: ");
    scanf("%s %d %f", s1.name, &s1.roll_no, &s1.marks);
    printf("Enter name, roll number, marks for second student: ");
    scanf("%s %d %f", s2.name, &s2.roll_no, &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks)
        printf("The students are identical.\n");
    else
        printf("The students are not identical.\n");

    return 0;
}
