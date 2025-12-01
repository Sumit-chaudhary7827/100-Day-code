//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.


#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int maxSum = arr[0];
    int currentSum = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    if (maxSum <= 0) {
        return maxElement;
    }
    return maxSum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = maxSubArraySum(arr, n);
    printf("%d\n", max_sum);

    return 0;
}
