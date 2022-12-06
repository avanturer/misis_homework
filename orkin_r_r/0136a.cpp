#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int getIndex(std::vector<int> v, int K) {
    auto it = std::find(v.begin(), v.end(), K);

    if (it != v.end()) {
        int index = it - v.begin();
        return index;
    }
}

int main() {
    int n = 0;
    int a = 0;
    std::vector<int> arr;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        arr.push_back(a);
    }

    for (int i = 0; i < n; i++){
        std::cout << getIndex(arr, i + 1) + 1<<" ";
    }


    return 0;
}

