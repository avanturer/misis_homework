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

double Plus(double x1, double y1, double x2, double y2){
    double summX = 0;
    double summY = 0;
    
    summX = x1 + x2;
    summY = y1 + y2;
    
    return summX, summY;
};

double Minus(double x1, double y1, double x2, double y2){
    double subtractX = 0;
    double subtractY = 0;
    
    subtractX = x1 - x2;
    subtractY = y1 - y2;
    
    return subtractX, subtractY;
};

double Scalar(double x1, double y1, double x2, double y2){
    double multipliX = 0;
    double multipliY = 0;
    
    multipliX = x1 * x2;
    multipliY = y1 * y2;
    
    return multipliX, multipliY;
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
    
    const double x1 = 5.0;
    const double y1 = 4.0;
    const duuble z1 = 10;
    const duuble phi1 = 3;
    
    Rdec2D dec;
    Rpol2D pol;
    
    std::cout<<0;
    return 0;
}
