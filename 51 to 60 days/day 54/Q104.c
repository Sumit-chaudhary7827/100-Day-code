//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.


#include <stdio.h>
#include <math.h>

int findPivotInteger(int n) {
    long long total = (long long)n * (n + 1) / 2; 
    int x = (int)sqrt((double)total);

    if ((long long)x * x == total) {
        return x;
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int pivot = findPivotInteger(n);
    printf("%d\n", pivot);

    return 0;
}
