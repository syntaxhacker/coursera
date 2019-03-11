#include <iostream>

int get_fibonacci_last_digit(long long int n) {
    if (n <= 1)
        return n;

    long long int previous = 0;
    long long int current  = 1;

    for (long long int i = 0; i < n - 1; ++i) {
        long long int tmp_previous = previous %10;
        previous = current %10;
        current = tmp_previous + current %10;
    }

    return current % 10;
}

int main() {
    long long int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit(n);
    std::cout << c << '\n';
    }
