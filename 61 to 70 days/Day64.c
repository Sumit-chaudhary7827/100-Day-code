//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


#include <stdio.h>
#include <string.h>

int longestUniqueSubstr(char *s) {
    int n = strlen(s);
    int max_len = 0;

    int left = 0; 
    int lastIndex[256]; 


    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    for (int right = 0; right < n; right++) {
        if (lastIndex[(unsigned char)s[right]] >= left) {
            left = lastIndex[(unsigned char)s[right]] + 1;
        }

        lastIndex[(unsigned char)s[right]] = right;

        if (right - left + 1 > max_len) {
            max_len = right - left + 1;
        }
    }

    return max_len;
}

int main() {
    char s[1001];
    printf("Enter a string: ");
    scanf("%1000s", s);

    int result = longestUniqueSubstr(s);
    printf("%d\n", result);

    return 0;
}
