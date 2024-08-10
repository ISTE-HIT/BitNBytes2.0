#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    
    printf("%d\n", min);
    return 0;
}
