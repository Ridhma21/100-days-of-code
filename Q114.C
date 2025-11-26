//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int freq[256] = {0};
    int left = 0, maxLen = 0, n = strlen(s);

    for (int right = 0; right < n; right++) {
        freq[(int)s[right]]++;
        while (freq[(int)s[right]] > 1) {
            freq[(int)s[left]]--;
            left++;
        }
        if (right - left + 1 > maxLen)
            maxLen = right - left + 1;
    }

    printf("%d", maxLen);
    return 0;
}
