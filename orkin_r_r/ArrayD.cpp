#include <iostream>
#include <cstring>

class ArrayD {
public:
    ArrayD() = default;

    ArrayD(const ArrayD &);

    explicit ArrayD(int size);

    ArrayD &operator=(const ArrayD &);

    ~ArrayD() = default;

    [[nodiscard]] ptrdiff_t size() const noexcept;

    void resize(ptrdiff_t new_size);

    void sort(bool reverse);

    double &operator[](ptrdiff_t i);

    const double &operator[](ptrdiff_t i) const;

private:
    void quicksort(int left, int right, bool reverse);

    ptrdiff_t size_ = 0;
    double *data_ = nullptr;
};

ptrdiff_t ArrayD::size() const noexcept {
    return size_;
}

void ArrayD::resize(const ptrdiff_t new_size) {
    double *new_data = new double[new_size];
    std::memset(new_data, 0, new_size * sizeof(double));
    int min_size = std::min(size_, new_size);
    for (int i = 0; i < min_size; i++) {
        new_data[i] = data_[i];
    }

    delete[] data_;
    data_ = new_data;
    size_ = new_size;
}

double &ArrayD::operator[](const ptrdiff_t i) {
    if (i < 0 || i >= size_) {
        throw std::out_of_range("Index out of range");
    }
    return data_[i];
}

const double &ArrayD::operator[](const ptrdiff_t i) const {
    if (i < 0 || i >= size_) {
        throw std::out_of_range("Index out of range");
    }
    return data_[i];
}

ArrayD::ArrayD(int size) {
    if (size < 0) {
        throw std::invalid_argument("Size must be non-negative.");
    }
    size_ = size;
    data_ = new double[size_];
}

void ArrayD::sort(bool reverse = false) {
    quicksort(0, size_ - 1, reverse);

}

void ArrayD::quicksort(int left = 0, int right = -1, bool reverse = false) {
    if (left >= right) {
        return;
    }

    // choose the pivot element
    int pivot_index = (left + right) / 2;
    double pivot_value = data_[pivot_index];

    // partition the array around the pivot element
    int i = left;
    int j = right;
    while (i <= j) {
        if (reverse) {
            while (data_[i] > pivot_value) {
                i++;
            }
            while (data_[j] < pivot_value) {
                j--;
            }
        } else {
            while (data_[i] < pivot_value) {
                i++;
            }
            while (data_[j] > pivot_value) {
                j--;
            }
        }
        if (i <= j) {
            std::swap(data_[i], data_[j]);
            i++;
            j--;
        }
    }

    // sort the two partitions
    quicksort(left, j, reverse);
    quicksort(i, right, reverse);
}


ArrayD::ArrayD(const ArrayD &) = default;

ArrayD &ArrayD::operator=(const ArrayD &) = default;

int main() {
    ArrayD a(3);
    a[0] = 2;
    a[1] = 1;
    a[2] = 3;
    a.sort(true);
    std::cout << a[0];
    return 0;
}
