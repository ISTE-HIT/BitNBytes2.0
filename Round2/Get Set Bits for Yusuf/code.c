#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;

    while (n != 0) {
        if ((n & 1) == 1) cnt++;
        n = n >> 1;
    }

    printf("%d\n", cnt);
    return 0;
}
