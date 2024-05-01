//matrix.h
#include <vector>
#include <iostream>
#include <cmath>

class Matrix {
private:
    std::vector<std::vector<int>> data;

public:
    Matrix();
    Matrix(int n);
    Matrix(const Matrix& other);

    int get(int i, int j) const;
    void set(int i, int j, int value);

    Matrix operator-(const Matrix& other) const;
    bool operator==(const Matrix& other) const;
    double norm() const;

    friend std::istream& operator>>(std::istream& in, Matrix& matrix);
    friend std::ostream& operator<<(std::ostream& out, const Matrix& matrix);
};
