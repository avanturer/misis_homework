#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>

int main() {
    int n = 0;
    int a = 0;
    std::vector<int> arr1;
    std::vector<int> kr_3;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a;
        arr1.push_back(a);
        if (a % 3 == 0) {
            kr_3.push_back(a);
        }
    }

    std::reverse(kr_3.begin(), kr_3.end());

    int i2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr1[i] % 3 == 0) {
            std::cout << kr_3[i2] << " ";
            i2++;
        } else {
            std::cout << arr1[i] << " ";
        }
    }


    return 0;
}
