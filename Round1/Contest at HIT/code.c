#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[50];
    scanf("%s", s);
    char first_half[5];
    strncpy(first_half, s, 4);
    first_half[4] = '\0';
    char digit_half[50];
    strcpy(digit_half, s + 4);
    int last_digit = atoi(digit_half);

    if (strcmp(first_half, "ISTE") == 0 && 1 <= last_digit && last_digit <= 349 && last_digit != 316) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}