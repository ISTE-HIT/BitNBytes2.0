#include <stdio.h>
#include <math.h>

const char* is_magical(int n) {
    if (n < 0) return "No";
    int curr_num = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }
    if (sum == curr_num) {
        return "Yes";
    }
    return "No";
}

int main() { 
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%s\n", is_magical(n));
    }
    return 0;
}