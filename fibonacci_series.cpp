#include <bits/stdc++.h>
using namespace std;

void printFibonacciIterative(int n) {
    if (n <= 0) {
        cout << "Please enter a positive integer.\n";
        return;
    }

    long long a = 0, b = 1;

    cout << "Fibonacci Series (iterative):\n";

    if (n >= 1) {
        cout << a << " ";
    }
    if (n >= 2) {
        cout << b << " ";
    }

    for (int i = 3; i <= n; ++i) {
        long long next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int numTerms;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> numTerms;

    printFibonacciIterative(numTerms);

    return 0;
}
