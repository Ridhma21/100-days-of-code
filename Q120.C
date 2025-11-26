//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);
    int capitalize = 1;

    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            if (capitalize) {
                s[i] = toupper(s[i]);
                capitalize = 0;
            } else {
                s[i] = tolower(s[i]);
            }
        } else if (s[i] == '.' || s[i] == '!' || s[i] == '?') {
            capitalize = 1;
        }
    }

    printf("%s", s);
    return 0;
}
