#include <iostream>
#include <cmath>

float fac_count(long long int i) {
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
    double a = -1;
    double b = 1;
    double d = 0.1;
    double e = 0.001;
    double f = 0;
    for (a; a <= b; a += d) {
        double s = 0;
        double x = 0;
        for (long long int i = 0; i >= 0; i++) {
            x = (std::pow(-1, i)) * ((std::pow(a, 2 * i)) / (fac_count(2 * i)));
            s += x;
            f = std::cos(a);
            if (std::abs(x) < e) {
                std::cout << a << "|" << s << "|" << f << std::endl;
                break;
            }
        }

    }
    return 0;
}
