﻿#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 2)
        return n - 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cout << "Hello World!\n";
    int n;
    cin >> n;
    cout << fib(n) << '\n';
    return 0;
}
