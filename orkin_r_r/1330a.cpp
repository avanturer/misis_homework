#include <iostream>
#include <vector>
 
int main() {
    int t, n, x, a, count;
    std::cin >> t;
    for (int j = 0; j < t; j++) {
        std::cin >> n >> x;
        std::vector<int> arr{0};
        arr.resize(1001);
        count = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> a;
            if (arr[a] == 0) {
                arr[a] = 1;
            }
        }
        for (int i = 1; i < 1000; i++) {
            if (arr[i] == 0 and x != 0) {
                arr[i] = 1;
                x -= 1;
            }
            if (x == 0) {
                break;
            }
        }
        for (int i = 1; i < 1000; i++) {
            if (arr[i] == 1) {
                count += 1;
            } else {
                std::cout << count << std::endl;
                break;
            }
 
        }
 
 
    }
    return 0;
}
