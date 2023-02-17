#include <iostream>
#include <stdexcept>

class Rational {
public:
    Rational();

    Rational(const Rational &);

    Rational(int32_t num, int32_t denum);

    Rational &operator=(const Rational &);

    Rational &operator+=(const Rational &a);

    Rational &operator-=(const Rational &a);

    Rational &operator*=(const Rational &a);

    Rational &operator/=(const Rational &a);

    Rational &operator++(int);

    Rational &operator--(int);

    bool operator==(const Rational &a) const;

    bool operator!=(const Rational &a) const;

    bool operator<(const Rational &a) const;

    bool operator>(const Rational &a) const;

    bool operator<=(const Rational &a) const;

    bool operator>=(const Rational &a) const;

    std::istream &readFrom(std::istream &istrm);

    std::ostream &writeTo(std::ostream &ostrm);

    ~Rational();

    static bool check_input(int32_t num, int32_t denum);

    Rational &redaction();


private:
    int32_t num_ = 0;
    int32_t denum_ = 1;
    static const char separator{'/'};
};

inline std::ostream &operator<<(std::ostream &ostrm, Rational &a) {
    return a.writeTo(ostrm);
}

inline std::istream &operator>>(std::istream &istrm, Rational &a) {
    return a.readFrom(istrm);
}

Rational operator+(const Rational &a, const Rational &b);

Rational operator-(const Rational &a, const Rational &b);

Rational operator*(const Rational &a, const Rational &b);

Rational operator/(const Rational &a, const Rational &b);


int main() {
    Rational a;
    std::cin >> a;
}

Rational::Rational() = default;

Rational::Rational(const Rational &) = default;

Rational::Rational(int32_t num, int32_t denum) {
    if (check_input(num, denum)) {
        num_ = num;
        denum_ = denum;
        redaction();
    }
}

bool Rational::check_input(int32_t num = 0, int32_t denum = -1) {
    if (denum == 0 or denum < 0) {
        throw std::invalid_argument("bad input");
    } else {
        return true;
    }
}

Rational &Rational::redaction() {
    int y, x;
    x = abs(num_);
    if (x == 0) {
        return *this;
    }
    y = denum_;
    while (x != y) {
        if (x > y) {
            x = x - y;
        } else {
            y = y - x;
        }
    }
    num_ /= x;
    denum_ /= x;

    return *this;
}


Rational &Rational::operator=(const Rational &tmp) = default;

Rational &Rational::operator+=(const Rational &a) {
    if (denum_ != a.denum_) {
        num_ *= a.denum_;
        num_ += a.num_ * denum_;
        denum_ *= a.denum_;
    } else {
        num_ += a.num_;
    }
    redaction();
    return *this;
}

Rational &Rational::operator-=(const Rational &a) {
    if (denum_ != a.denum_) {
        num_ *= a.denum_;
        num_ -= a.num_ * denum_;
        denum_ *= a.denum_;
    } else {
        num_ -= a.num_;
    }
    redaction();
    return *this;
}

Rational &Rational::operator*=(const Rational &a) {
    num_ *= a.num_;
    denum_ *= a.denum_;
    redaction();
    return *this;
}

Rational &Rational::operator/=(const Rational &a) {
    if (a.num_ < 0) {
        num_ *= -a.denum_;
        denum_ *= -a.num_;
    } else if (a.num_ == 0) {
        throw std::invalid_argument("division by zero");
    } else {
        num_ *= a.denum_;
        denum_ *= a.num_;
    }

    redaction();
    return *this;
}

Rational &Rational::operator++(int) {
    num_ += denum_;
    redaction();
    return *this;
}

Rational &Rational::operator--(int) {
    num_ -= denum_;
    redaction();
    return *this;
}

bool Rational::operator==(const Rational &a) const {
    bool res;
    res = (num_ == a.num_ and denum_ == a.denum_);
    return res;
}

bool Rational::operator!=(const Rational &a) const {
    bool res;
    res = (num_ != a.num_ and denum_ != a.denum_);
    return res;
}

bool Rational::operator<(const Rational &a) const {
    bool res;
    int num = num_;
    int denum = denum_;

    if (denum != a.denum_) {
        denum *= a.denum_;
        num *= a.denum_;
        num -= a.num_ * denum_;
    } else {
        num -= a.num_;
    }

    res = (num < 0);
    return res;
}

bool Rational::operator>(const Rational &a) const {
    bool res;
    int num = num_;
    int denum = denum_;

    if (denum != a.denum_) {
        denum *= a.denum_;
        num *= a.denum_;
        num -= a.num_ * denum_;
    } else {
        num -= a.num_;
    }

    res = (num > 0);
    return res;
}

bool Rational::operator<=(const Rational &a) const {
    bool res;
    int num = num_;
    int denum = denum_;

    if (denum != a.denum_) {
        denum *= a.denum_;
        num *= a.denum_;
        num -= a.num_ * denum_;
    } else {
        num -= a.num_;
    }

    res = (num <= 0);
    return res;
}

bool Rational::operator>=(const Rational &a) const {
    bool res;
    int num = num_;
    int denum = denum_;

    if (denum != a.denum_) {
        denum *= a.denum_;
        num *= a.denum_;
        num -= a.num_ * denum_;
    } else {
        num -= a.num_;
    }

    res = (num >= 0);
    return res;
}


Rational operator+(const Rational &a, const Rational &b) {
    Rational res(a);
    res += b;
    res.redaction();
    return res;
}

Rational operator-(const Rational &a, const Rational &b) {
    Rational res(a);
    res -= b;
    res.redaction();
    return res;
}

Rational operator*(const Rational &a, const Rational &b) {
    Rational res(a);
    res *= b;
    res.redaction();
    return res;
}

Rational operator/(const Rational &a, const Rational &b) {
    Rational res(a);
    res /= b;
    res.redaction();
    return res;
}

std::ostream &Rational::writeTo(std::ostream &ostrm) {
    redaction();
    ostrm << num_ << separator << denum_ << std::endl;
    return ostrm;
}

std::istream &Rational::readFrom(std::istream &istrm) {
    int32_t num(0);
    char comma(0);
    int32_t denum(0);
    istrm >> num >> comma >> denum;
    if (istrm.good()) {
        if ((Rational::separator == comma) and check_input(num, denum)) {
            num_ = num;
            denum_ = denum;
        } else {
            istrm.setstate(std::ios_base::failbit);
        }
    }
    return istrm;

}

Rational::~Rational() = default;
