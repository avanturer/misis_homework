#include <iostream>
#include <cmath>

int main() {
    double a = 0;
    double b = 1;
    double d = 0.05;
    double e = 0.001;
    double f = 0;
    for (a; a <= b; a += d) {
        double s = 0;
        double x = 0;
        for (long long int i = 1; i >= 0; i++) {
            x = (std::pow(a, i)) * (std::sin((M_PI / 4) * i));
            s += x;
            f = (a * std::sin(M_PI / 4)) / (1 - 2 * a * std::cos(M_PI / 4));
            if (std::abs(x) < e) {
                std::cout << a << "|" << s << "|" << f << std::endl;
                break;
            }
        }
    }
    return 0;
}
