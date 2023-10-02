#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the diamond: ";
    cin >> n;

    // Print the upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces for the current line//adding different dummy line in the code
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars for the current line
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    // Print the lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces for the current line
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars for the current line
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }
  return 0;
}