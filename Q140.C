//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {MALE, FEMALE, OTHER};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    printf("Enter name: ");
    scanf("%s", p.name);
    int g;
    printf("Enter gender (0-MALE, 1-FEMALE, 2-OTHER): ");
    scanf("%d", &g);
    p.gender = g;

    printf("Name: %s\n", p.name);
    printf("Gender: ");
    switch(p.gender) {
        case MALE: printf("MALE\n"); break;
        case FEMALE: printf("FEMALE\n"); break;
        case OTHER: printf("OTHER\n"); break;
    }
    return 0;
}
