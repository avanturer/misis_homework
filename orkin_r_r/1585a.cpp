#include <iostream>
#include <vector>
#include <math.h>
 
int main() {
    int t = 0;
    int n = 0;
    int a = 0;
 
    std::cin >> t;
    for (int j = 0; j < t; j++) {
        int len = 1;
        std::vector<int> arr;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> a;
            arr.push_back(a);
        }
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (arr[i] == 1) {
                    len += 1;
                }
            } else {
                if (arr[i] == 1 and arr[i - 1] == 1) {
                    len += 5;
                } else if (arr[i] == 1 and arr[i - 1] == 0) {
                    len += 1;
                } else if (arr[i] == 0 and arr[i - 1] == 0) {
                    len = -1;
                    break;
                }
            }
        }
        std::cout << len << std::endl;
    }
    return 0;
}
