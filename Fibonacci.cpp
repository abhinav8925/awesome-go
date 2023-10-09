#include <iostream>
using namespace std;

// Function to generate Fibonacci series up to n terms
void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << " terms: ";
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci Series: ";
    cin >> n;

    generateFibonacci(n);

    return 0;
}
