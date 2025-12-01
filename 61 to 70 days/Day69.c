//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    
    
    scanf("%d", &n);
    int arr[n];
    
   
    long long actual_sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i];
    }
    
   
    long long expected_sum = (long long)(n - 1) * n / 2;
    
    
    int duplicate = actual_sum - expected_sum;
    printf("%d\n", duplicate);
    
    return 0;
}
