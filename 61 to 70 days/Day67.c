//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n;
    
    
    scanf("%d %d", &m, &n);
    
    int arr1[m], arr2[n], merged[m + n];
    
   
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
   
    for (int j = 0; j < n; j++) {
        scanf("%d", &arr2[j]);
    }
    
    int i = 0, j = 0, k = 0;
    
    
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
   
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    
   
    while (j < n) {
        merged[k++] = arr2[j++];
    }
    
   
    for (int idx = 0; idx < m + n; idx++) {
        printf("%d ", merged[idx]);
    }
    printf("\n");
    
    return 0;
}
