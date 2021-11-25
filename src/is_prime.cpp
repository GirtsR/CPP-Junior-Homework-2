#include "is_prime.h"

bool isPrime(int n) {
    if (n <= 2) {
        return false;
    }

    if (n == 2) {
        return true;
    }

    if (n % 2 == 0) {
        return false;
    }

    for (int i = 3; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
