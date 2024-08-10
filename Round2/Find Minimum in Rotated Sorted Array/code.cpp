#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    
    cout << min << endl;
    return 0;
}
