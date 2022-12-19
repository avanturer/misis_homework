#include <iostream>
#include <cmath>

struct Rdec2D {
    double x = 0.0;
    double y = 0.0;
};

struct Rpol2D {
    double z = 0.0;
    double phi = 0.0;
};

Rdec2D ToDec(const Rpol2D &a) {
    Rdec2D result;

    result.x = a.z * std::cos(a.phi);
    result.y = a.z * std::sin(a.phi);

    return result;
};

Rpol2D ToPol(const Rdec2D &a) {
    Rpol2D result;

    result.z = std::sqrt(std::pow(a.x, 2) + std::pow(a.y, 2));
    result.phi = std::atan(a.y / a.x);

    return result;

};

Rdec2D operator-(const Rdec2D &a) {
    Rdec2D result;

    result.x = -a.x;
    result.y = -a.y;

    return result;
};


Rpol2D operator-(const Rpol2D &a) {
    Rdec2D dec1;

    Rpol2D result;

    dec1 = ToDec(a);

    dec1.x = -dec1.x;
    dec1.y = -dec1.y;

    result = ToPol(dec1);

    return result;
};

Rdec2D operator+(const Rdec2D &a, const Rdec2D &b) {
    Rdec2D result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
};

Rpol2D operator+(const Rpol2D &a, const Rpol2D &b) {
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

Rdec2D operator-(const Rdec2D &a, const Rdec2D &b) {
    Rdec2D result;

    result.x = a.x - b.x;
    result.y = a.y - b.y;

    return result;
};


Rpol2D operator-(const Rpol2D &a, const Rpol2D &b) {
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

Rdec2D operator*(double a, const Rdec2D &b) {
    Rdec2D result;

    result.x = a * b.x;
    result.y = a * b.y;

    return result;
}

Rpol2D operator*(double a, const Rpol2D &b) {
    Rpol2D result;
    Rdec2D dec1;
    Rdec2D dec2;

    dec1 = ToDec(b);

    dec2.x = a * dec1.x;
    dec2.y = a * dec1.y;

    result = ToPol(dec2);

    return result;
}

Rdec2D operator*(const Rdec2D &b, double a) {
    Rdec2D result;

    result.x = a * b.x;
    result.y = a * b.y;

    return result;
}

Rpol2D operator*(const Rpol2D &b, double a) {
    Rpol2D result;
    Rdec2D dec1;
    Rdec2D dec2;

    dec1 = ToDec(b);

    dec2.x = a * dec1.x;
    dec2.y = a * dec1.y;

    result = ToPol(dec2);

    return result;
}

Rdec2D operator/(const Rdec2D &a, double b) {
    Rdec2D result;

    result.x = a.x / b;
    result.y = a.y / b;

    return result;
}

Rpol2D operator/(const Rpol2D &a, double b) {
    Rpol2D result;
    Rdec2D dec1;
    Rdec2D dec2;

    dec1 = ToDec(a);

    dec2.x = dec1.x / b;
    dec2.y = dec1.y / b;

    result = ToPol(dec2);

    return result;
}

Rdec2D Dot(const Rdec2D &a, const Rdec2D &b) {
    Rdec2D result;

    result.x = a.x * b.x;
    result.y = a.y * b.y;

    return result;
}

Rpol2D Dot(const Rpol2D &a, const Rpol2D &b) {
    Rdec2D dec1;
    Rdec2D dec2;
    Rdec2D dec3;

    Rpol2D result;

    dec1 = ToDec(a);
    dec2 = ToDec(b);

    dec3.x = dec1.x * dec2.x;
    dec3.y = dec1.y * dec2.y;

    result = ToPol(dec3);

    return result;
};

double Norm(const Rdec2D &a) {
    double result = 0;

    result = std::sqrt(std::pow(a.x, 2) + std::pow(a.y, 2));

    return result;
}

bool operator==(const Rdec2D &a, const Rdec2D &b) {
    bool result = false;

    if (a.x == b.x and a.y == b.y) {
        result = true;
    }

    return result;
};

bool operator==(const Rpol2D &a, const Rpol2D &b) {
    Rdec2D dec1;
    Rdec2D dec2;
    bool result = false;

    dec1 = ToDec(a);
    dec2 = ToDec(b);

    if (dec1.x == dec2.x and dec1.y == dec2.y) {
        result = true;
    }

    return result;
};

bool operator==(const Rdec2D &a, const Rpol2D &b) {
    Rpol2D pol1;
    bool result = false;

    pol1 = ToPol(a);

    if (pol1.z == b.z) {
        result = true;
    }

    return result;
};

bool operator!=(const Rdec2D &a, const Rdec2D &b) {
    bool result = false;

    if (a.x != b.x and a.y != b.y) {
        result = true;
    }

    return result;
};

bool operator!=(const Rpol2D &a, const Rpol2D &b) {
    Rdec2D dec1;
    Rdec2D dec2;
    bool result = false;

    dec1 = ToDec(a);
    dec2 = ToDec(b);

    if (dec1.x != dec2.x and dec1.y != dec2.y) {
        result = true;
    }

    return result;
};

bool operator!=(const Rdec2D &a, const Rpol2D &b) {
    Rpol2D pol1;
    bool result = false;

    pol1 = ToPol(a);

    if (pol1.z != b.z) {
        result = true;
    }

    return result;
};

int main() {
    return 0;
}
