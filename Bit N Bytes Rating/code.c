#include <stdio.h>

int main() {
    int R;
    scanf("%d", &R);
    
    if (R < 1200) {
        printf("BNB-Beginner\n");
    } else if (R < 2800) {
        printf("BNB-Intermediate\n");
    } else {
        printf("BNB-All\n");
    }
    
    return 0;
}