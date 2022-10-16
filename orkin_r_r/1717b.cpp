#include <iostream>
#include <string>
#include <array>

int main() {
    int t = 0;
    int n = 0;
    int k = 0;
    int r = 0;
    int c = 0;
    int r_copy = 0;
    int c_copy = 0;
    std::cin >> t;
    for (int j = 0; j < t; j++) {
        std::cin >> n >> k >> r >> c;
        r--;
        c--;
        r_copy = r;
        c_copy = c;
        char arr[n][n];

        for (int i = 0; i < n; i++) {
            for (int l = 0; l < n; l++) {
                arr[i][l] = '.';

            }
        }
        arr[r][c] = 'X';
        while (1 == 1) {
            if (r > c) {
                int diagonalStartX = r - c;
                int diagonalStartY = 0;
                if (diagonalStartX > n - 1) {
                    break;
                }
                while (diagonalStartX <= n - 1) {
                    arr[diagonalStartX][diagonalStartY] = 'X';
                    diagonalStartX++;
                    diagonalStartY++;
                }

            } else if (r < c) {
                int diagonalStartX = 0;
                int diagonalStartY = (c - r);
                if (diagonalStartY > n - 1) {
                    break;
                }
                while (diagonalStartY <= n - 1) {
                    arr[diagonalStartX][diagonalStartY] = 'X';
                    diagonalStartX++;
                    diagonalStartY++;
                }
            } else {
                int diagonalStartX = 0;
                int diagonalStartY = 0;
                if (diagonalStartX > n - 1) {
                    break;
                }
                while (diagonalStartX <= n - 1) {
                    arr[diagonalStartX][diagonalStartY] = 'X';
                    diagonalStartX++;
                    diagonalStartY++;
                }
            }
            r -= k - 1;
            c++;
        }
        r = r_copy;
        c = c_copy;
        while (1 == 1) {
            if (r > c) {
                int diagonalStartX = (r - c);
                int diagonalStartY = 0;
                if (diagonalStartX > n - 1) {
                    break;
                }
                while (diagonalStartX <= n - 1) {
                    arr[diagonalStartX][diagonalStartY] = 'X';
                    diagonalStartX++;
                    diagonalStartY++;
                }

            } else if (r < c) {
                int diagonalStartX = 0;
                int diagonalStartY = (c - r);
                if (diagonalStartY > n - 1) {
                    break;
                }
                while (diagonalStartY <= n - 1) {
                    arr[diagonalStartX][diagonalStartY] = 'X';
                    diagonalStartX++;
                    diagonalStartY++;
                }
            } else {
                int diagonalStartX = 0;
                int diagonalStartY = 0;
                if (diagonalStartX > n - 1) {
                    break;
                }
                while (diagonalStartX <= n - 1) {
                    arr[diagonalStartX][diagonalStartY] = 'X';
                    diagonalStartX++;
                    diagonalStartY++;
                }
            }
            r += k - 1;
            c--;
        }
        for (int i = 0; i < n; i++) {
            for (int l = 0; l < n; l++) {
                std::cout << arr[i][l];
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
