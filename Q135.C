//Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Numbers {A = 10, B, C, D};

int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    return 0;
}
