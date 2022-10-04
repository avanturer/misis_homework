#include <iostream>
 
int main() {
    int w[5][5] = {}, row = 0, col = 0, moves = 0;
 
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            std::cin >> w[j][i];
            if (w[j][i] == 1) {
                row = j;
                col = i;
            }
        }
    }
    moves = abs(2 - row) + abs(2 - col);
    std::cout << moves;
    return 0;
}
