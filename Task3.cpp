#include <iostream>
using namespace std;

void fib(int n) {
    int first = 0;
    int second = 1;
    for (int i = 0; i < n; ++i) {
        cout << first << '\n';
        int next = first+second;
        first = second;
        second = next;
    }
}

int main() {
    cout << "Hello World!\n";
    int n;
    cin >> n;
    fib(n);
    return 0;
}
