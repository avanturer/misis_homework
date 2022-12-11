#include <iostream>
#include <array>
#include <set>


int main() {
    int t;
    int n;

    std::array<int, 1001> res{};
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> n;
        std::set<int> a;
        int var;
        int count0 = 0;
        for (int j = 0; j < n; j++) {
            std::cin >> var;
            count0 += var == 0 ? 1 : 0;
            a.insert(var);
        }
        if (count0 != 0) {
            res[i] = n - count0;
        } else if (a.size() != n) {
            res[i] = n;
        } else if (a.size() == n) {
            res[i] = n + 1;
        }
    }
    for (int i = 0; i < t; i++) {
        std::cout << res[i] << std::endl;
    }
}
