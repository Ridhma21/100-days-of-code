//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxEnding = arr[0];
    int maxSoFar = arr[0];

    for (int i = 1; i < n; i++) {
        if (maxEnding + arr[i] > arr[i])
            maxEnding = maxEnding + arr[i];
        else
            maxEnding = arr[i];
        if (maxEnding > maxSoFar)
            maxSoFar = maxEnding;
    }

    printf("%d", maxSoFar);
    return 0;
}
