#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
 
int main()
{
    int n,r;
    double R;
    std::cin>>n>>r;
    R = r * (std::sin(M_PI/n)/(1- std::sin(M_PI/n)));
    std::cout<<std::setprecision(8)<<R;
 
    return 0;
}
