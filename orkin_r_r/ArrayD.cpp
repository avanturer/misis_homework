#include <iostream>

class ArrayD {
public:
    ArrayD() = default;

    ArrayD(const ArrayD &);

    ArrayD(int size);

    ArrayD &operator=(const ArrayD &);

    ArrayD &operator=(double x);

    ~ArrayD() = default;

    ptrdiff_t ssize() const noexcept;

    void resize(const ptrdiff_t size);

    double &operator[](const ptrdiff_t i);

    const double &operator[](const ptrdiff_t i) const;

private:
    ptrdiff_t size_ = 0;
    double *data_ = nullptr;
};

ptrdiff_t ArrayD::ssize() const noexcept {
    return 0;
}

void ArrayD::resize(const ptrdiff_t size) {

}

double &ArrayD::operator[](const ptrdiff_t i) {
    return data_[i];
}

const double &ArrayD::operator[](const ptrdiff_t i) const {
    return data_[i];
}

ArrayD::ArrayD(int size) {
    data_ = new double[size];
}

ArrayD &ArrayD::operator=(double x) {
    data_[] = x;
}

ArrayD::ArrayD(const ArrayD &) = default;

ArrayD &ArrayD::operator=(const ArrayD &) = default;

int main() {

    return 0;
}
