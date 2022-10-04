#include <iostream>
#include <cmath>
 
int check_len(int number, int *number_len) {
    while (number > 0) {
        number /= 10;
        *number_len += 1;
    }
}
 
int check_t_count(int number, int *t) {
    while (number > 0) {
        if (number % 10 != 0) {
            *t += 1;
        }
        number /= 10;
    }
}
 
int main() {
    int count = 0, n = 0, t = 0, array = {}, num_len = 0;
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        t = 0;
        std::cin >> n;
        check_len(n, &num_len);
        check_t_count(n, &t);
        std::cout << t << std::endl;
        for (int j = 0; j < num_len; j++) {
            if (n % 10 != 0) {
                std::cout << (n % 10) * (pow(10, j)) << " ";
            }
            n /= 10;
        }
        std::cout << std::endl;
    }
    return 0;
}
