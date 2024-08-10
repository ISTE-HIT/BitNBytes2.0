#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int BubblyMaths(int N) {
    if (N == 1) return 1;
    if (N == 2) return 2;
    if (N == 3) return 6;
    if (N == 4) return 7;
    if (N % 4 == 1) return N + 2;
    if (N % 4 == 2) return N + 2;
    if (N % 4 == 3) return N - 1;
    return N + 1;
}

char *ltrim(char *str) {
    while(isspace((unsigned char)*str)) str++;
    return str;
}

char *rtrim(char *str) {
    char *end = str + strlen(str) - 1;
    while(end > str && isspace((unsigned char)*end)) end--;
    *(end + 1) = '\0';
    return str;
}

int main() {
    char n_temp[16];
    fgets(n_temp, 16, stdin);

    int n = atoi(rtrim(ltrim(n_temp)));

    int result = BubblyMaths(n);

    printf("%d\n", result);
    return 0;
}
