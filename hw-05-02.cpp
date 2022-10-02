#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

#include <iomanip>

float fac_count(long long int i) {
    if (i == 0) {
        return 1;
    }
    long long int res = 1;
    for (long long int j = i; j <= i; j++) {
        res *= i;
    }
    return res;
}

int main() {
    double a = 0;
    double b = 1;
    double d = 0.05;
    double e = 0.001;
    double f = 0;
    for (a; a < b; a += d) {
        double s1 = 0;
        double s2 = 0;
        for (long long int i = 0; i >= 0; i++) {
            s1 += (std::pow(a, i)) * (std::sin((M_PI / 4) * i));
            s2 += (std::pow(a, i + 1)) * (std::sin((M_PI / 4) * (i + 1)));
            f = (a * std::sin(M_PI / 4)) / (1 - 2 * a * std::cos(M_PI / 4));
            if (std::abs(s2 - s1) < e) {
                std::cout << a << "|" << s1 << "|" << f << std::endl;
                break;
            }
        }
    }
    return 0;
}
