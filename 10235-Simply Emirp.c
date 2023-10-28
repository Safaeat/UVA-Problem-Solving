#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int reverse(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        if (isPrime(n)) {
            int reversedN = reverse(n);
            if (isPrime(reversedN) && n != reversedN) {
                printf("%d is emirp.\n", n);
            } else {
                printf("%d is prime.\n", n);
            }
        } else {
            printf("%d is not prime.\n", n);
        }
    }

    return 0;
}
