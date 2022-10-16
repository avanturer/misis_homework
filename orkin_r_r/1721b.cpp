#include <iostream>

int main() {
    int t = 0;
    int n = 0, m = 0;
    int sx = 0, sy = 0;
    int d = 0;

    std::cin >> t;

    for (int j = 0; j < t; j++) {
        std::cin >> n >> m >> sx >> sy >> d;
        if ((sx - d <= 1 or sy + d >= m) and (sx + d >= n or sy - d <= 1)) {
            std::cout << -1 << std::endl;
        } else {
            std::cout << n + m - 2 << std::endl;
        }
    }
    return 0;
}
