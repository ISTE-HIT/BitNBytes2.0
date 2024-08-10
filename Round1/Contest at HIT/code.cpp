#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string first_half = s.substr(0, 4);
    string digit_half = s.substr(4);
    int last_digit = stoi(digit_half);

    if (first_half == "ISTE" && 1 <= last_digit && last_digit <= 349 && last_digit != 316) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}