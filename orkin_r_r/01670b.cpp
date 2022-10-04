#include <iostream>
#include <string>
#include <array>

int main() {
    int t = 0;
    int n = 0;
    int k = 0;
    int special_count = 0;
    char c = 0;
    int count = 0;
    unsigned char c1 = 0;
    unsigned char first_item = 0;


    std::cin >> t;

    for (int j = 0; j < t; j++) {

        std::string str;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> c;
            str.push_back(c);
        }

        std::array<int, 257> arr{0};
        std::cin >> k;
        for (int i = 0; i < k; i++) {
            std::cin >> c1;
            arr[int(c1)] = 1;
        }

        special_count = 0;
        for (int i = 0; i < n; i++) {
            c1 = str[i];
            if (arr[int(c1)] == 1) {
                special_count += 1;
            }
        }

        first_item = str[0];
        count = 0;
        while ((special_count >= 1) and (arr[int(first_item)] != 1)) {
            int i = 0;
            int tmp = 0;
            while (i < n) {
                c1 = str[i + 1];
                if (arr[int(c1)] == 1) {
                    c1 = str[i];
                    if (arr[int(c1)] == 1) {
                        special_count -= 1;
                    }
                    str.erase(i, 1);
                    n--;
                    i -= tmp;
                    tmp = 0;
                } else {
                    tmp += 1;
                }
                i++;
            }
            count += 1;
            first_item = str[0];
        }
        std::cout << count << std::endl;
    }
    return 0;
}
