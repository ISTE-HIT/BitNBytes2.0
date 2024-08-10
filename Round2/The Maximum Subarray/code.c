#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void maxSubarray(int arr[], int n, int result[2]) {
    int maxi = INT_MIN;
    int maxis = INT_MIN;
    int sum = 0;
    
    // Find maximum subarray sum using Kadane's algorithm
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    
    if (maxi < 0) {
        result[0] = maxi;
        result[1] = maxi;
        return;
    }
    
    sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) continue;
        sum += arr[i];
        if (sum > maxis) {
            maxis = sum;
        }
    }
    
    result[0] = maxi;
    result[1] = maxis;
}

int main() {
    int t;
    scanf("%d", &t);
    
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        scanf("%d", &n);
        
        int *arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int result[2];
        maxSubarray(arr, n, result);
        
        printf("%d %d\n", result[0], result[1]);
        
        free(arr);
    }
    
    return 0;
}
