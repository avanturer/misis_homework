#include <iostream>
#include <vector>
#include <math.h>

int main() {
    int n = 0;
    int k = 0;
    int a = 0;
    int res = 1000000000;

    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        if (k % a == 0 and k / a < res) {
            res = k / a;
        }
    }
    std::cout << res;

    return 0;
}
