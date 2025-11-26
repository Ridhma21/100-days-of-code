//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    char c;
    int inWord = 0;

    while ((c = fgetc(fp)) != EOF) {
        chars++;
        if (c == '\n')
            lines++;
        if (isspace(c))
            inWord = 0;
        else if (!inWord) {
            words++;
            inWord = 1;
        }
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(fp);
    return 0;
}
