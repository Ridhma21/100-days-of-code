//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = 0;
    for (int i = 0; i < n; i++)
        result ^= arr[i];
    for (int i = 0; i < n - 1; i++)
        result ^= i;

    printf("%d", result);
    return 0;
}
