#include <iostream>
using namespace std;

int main() {
    int S, K;
    cin >> K >> S;
    int count = 0;

    for (int x = 0; x <= K; ++x) {
        for (int y = 0; y <= K; ++y) {
            int z = S - (x + y);
            if (0 <= z && z <= K) {
                count++;
            }
        }
    }
    cout << count << " ";
    return 0;
}