#include <iostream>
#include <cmath>
#include <std::vector>

struct Rdec2D{
    double x = 0.0;
    double y = 0.0;
};

struct Rpol2D{
    double z = 0.0;
    double phi = 0.0;
};

Rdec2D operator+(const Rdec2D& a, const Rdec2D& b){
    Rdec2D result;
    
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    
    return result;
};

Rdec2D operator-(const Rdec2D& a, const Rdec2D& b){
    Rdec2D result;
    
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    
    return result;
};



double PolToDec(double z, double phi){
    double x = 0;
    double y = 0;
    x = z*std::cos(phi);
    y = z*std::sin(phi);
    
    return x,y;
};

double DecToPol(double x, double y){
    double z = 0;
    double phi = 0;
    
    z = std::sqrt(std::pow(x,2)*std::pow(y,2));
    phi = std::atan(y/x);
    
    return z, phi;
    
};

int main()
{

    Rdec2D dec;
    Rpol2D pol;
    
    std::cout<<0;
    return 0;
}
