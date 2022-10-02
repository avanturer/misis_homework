#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

#include <iomanip>

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
    double a = 0;
    double b = 1;
    double d = 0.1;
    double e = 0.0001;
    double f = 0;
    for (a; a < b; a += d) {
        double s1 = 0;
        double s2 = 0;
        for (long long int i = 0; i >= 0; i++) {
            std::cout<<std::abs(s2 - s1);
            s1 += (std::pow(2*a, i)) / (fac_count(i));
            s2 += (std::pow(2*a, i+1)) / (fac_count(i+1));
            f = (std::pow(M_E, 2*a));
            if (std::abs(s2 - s1) < e) {
                std::cout << a << "|" << s1 << "|" << f << std::endl;
                break;
            }
        }
    }
    return 0;
}
