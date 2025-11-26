//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Colors {RED, GREEN, BLUE, YELLOW};

int main() {
    for (int i = RED; i <= YELLOW; i++) {
        switch(i) {
            case RED: printf("RED = %d\n", i); break;
            case GREEN: printf("GREEN = %d\n", i); break;
            case BLUE: printf("BLUE = %d\n", i); break;
            case YELLOW: printf("YELLOW = %d\n", i); break;
        }
    }
    return 0;
}
