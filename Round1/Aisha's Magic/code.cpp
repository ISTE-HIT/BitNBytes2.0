#include <iostream>
#include <cmath>
using namespace std;

string is_magical(int n) {
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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << is_magical(n) << endl;
    }
    return 0;
}
