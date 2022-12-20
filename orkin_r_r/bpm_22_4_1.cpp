#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>

double fac_count(long long int i) {
    if (i == 0) {
        return 1;
    }
    long long int res = 1;
    for (long long int j = 1; j <= i; j++) {
        res *= j;
    }
    return res;
}

int main() {
    double a = 0.1;
    double b = 1;
    double e = 0.0001;
    double d = 0.05;

    for (a; a <= b; a += d) {
        double s = 0;
        double x = 0;
        for (long long int i = 0; i >= 0; i++) {
            x = (std::pow(x, 2 * i)) / (fac_count(2 * i));
            s += x;
            if (std::abs(x) < e) {
                std::cout << "x: " << a << " " << "E: " << s << std::endl;
                break;
            }
        }

    }
    return 0;
}