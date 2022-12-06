#include <iostream>
#include <vector>
#include <array>


int main() {
    int n = 0;
    int count = 0;
    bool location_top = false;
    bool last_location_top = false;
    char s = ' ';
    std::array<int, 2> pos = {0, 0};

    std::cin >> n;
    std::cin >> s;
    if (s == 'U') {
        pos[1] += 1;
    } else {
        pos[0] += 1;
    }
    last_location_top = location_top;
    if (pos[1] > pos[0]) {
        location_top = true;
    } else if (pos[1] < pos[0]) {
        location_top = false;
    }

    for (int i = 0; i < n - 1; i++) {
        std::cin >> s;
        if (s == 'U') {
            pos[1] += 1;
        } else {
            pos[0] += 1;
        }
        last_location_top = location_top;
        if (pos[1] > pos[0]) {
            location_top = true;
        } else if (pos[1] < pos[0]) {
            location_top = false;
        }
        if (location_top != last_location_top) {
            count += 1;
        }


    }
    std::cout << count;
    return 0;
}

