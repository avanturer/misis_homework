#include <iostream>
#include <cmath>
 
 
int main() {
    int n = 0, k = 0, f = 0, t = 0;
    long long int maxx = -10000000000000000, tmp_maxx = 0;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> f >> t;
        if (t > k) {
            tmp_maxx = f - (t - k);
        } else {
            tmp_maxx = f;
        }
        if (tmp_maxx > maxx) {
            maxx = tmp_maxx;
        }
    }
    std::cout << maxx;
    return 0;
}
