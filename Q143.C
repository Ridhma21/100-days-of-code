//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks)
            maxIndex = i;
    }

    printf("\nTop Student:\n");
    printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[maxIndex].name, students[maxIndex].roll_no, students[maxIndex].marks);

    return 0;
}
