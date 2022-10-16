#include <iostream>
#include <vector>
#include <math.h>

int main() {
    int t = 0;
    int n = 0;
    double a = 0;
    double b = 0;
    int tm = 0;
    double time = 0;

    std::cin >> t;
    for (int j = 0; j < t; j++) {
        std::vector<double> a_vec;
        std::vector<double> b_vec;
        time = 0;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin>>a>>b;
            a_vec.push_back(a);
            b_vec.push_back(b);
        }
        for (int i = 0; i < n; i++) {
            std::cin>>tm;

            if (i==0){
                time+= a_vec[i] + tm;
            }
            else{
                time+= a_vec[i] - b_vec[i-1]  + tm;
            }
            if (i +1 != n) {
                time += ceil((b_vec[i] - a_vec[i]) / 2);
                if (time < b_vec[i]) {
                    time += b_vec[i] - time;
                }
            }
        }
        std::cout<<int(time)<<std::endl;


    }

    return 0;
}
