#include <stdio.h>

int main() {
    int K, S;
    scanf("%d %d", &K, &S);
    int count = 0;

    for (int x = 0; x <= K; ++x) {
        for (int y = 0; y <= K; ++y) {
            int z = S - (x + y);
            if (0 <= z && z <= K) {
                count++;
            }
        }
    }
    printf("%d ", count);
    return 0;
}