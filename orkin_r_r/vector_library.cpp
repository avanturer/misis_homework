#include <iostream>
#include <cmath>

struct Rdec2D{
    double x = 0.0;
    double y = 0.0;
};

struct Rpol2D{
    double z = 0.0;
    double phi = 0.0;
};

Rdec2D ToDec(const Rpol2D& a){
    Rdec2D result;

    result.x = a.z*std::cos(a.phi);
    result.y = a.z*std::sin(a.phi);

    return result;
};

Rpol2D ToPol(const Rdec2D& a){
    Rpol2D result;

    result.z = std::sqrt(std::pow(a.x,2)*std::pow(a.y,2));
    result.phi = std::atan(a.y/a.x);

    return result;

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

Rpol2D operator+(const Rpol2D& a, const Rpol2D& b){
    Rdec2D dec1;
    Rdec2D dec2;
    Rdec2D dec3;

    Rpol2D result;

    dec1 = ToDec(a);
    dec2 = ToDec(b);

    dec3.x = dec1.x + dec2.x;
    dec3.y = dec1.y + dec2.y;

    result = ToPol(dec3);

    return result;
};

Rpol2D operator-(const Rpol2D& a, const Rpol2D& b){
    Rdec2D dec1;
    Rdec2D dec2;
    Rdec2D dec3;

    Rpol2D result;

    dec1 = ToDec(a);
    dec2 = ToDec(b);

    dec3.x = dec1.x - dec2.x;
    dec3.y = dec1.y - dec2.y;

    result = ToPol(dec3);

    return result;
};




int main()
{

    Rdec2D dec;
    Rpol2D pol;

    std::cout<<0;
    return 0;
}
