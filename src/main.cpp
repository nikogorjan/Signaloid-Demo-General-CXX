#include <iostream>
#include <vector>

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int lower_limit = 2;  // Define your lower limit
    int upper_limit = 100000;  // Define your upper limit

    std::vector<int> prime_numbers;

    for (int num = lower_limit; num <= upper_limit; ++num) {
        if (is_prime(num)) {
            prime_numbers.push_back(num);
        }
    }

    std::cout << "Prime numbers between " << lower_limit << " and " << upper_limit << ":\n";

    for (int prime : prime_numbers) {
        std::cout << prime << " ";
    }

    std::cout << std::endl;

    return 0;
}
