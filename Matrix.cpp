//matrix.cpp
#include "Matrix.h"

Matrix::Matrix() {}

Matrix::Matrix(int n) : data(n, std::vector<int>(n)) {}

Matrix::Matrix(const Matrix& other) : data(other.data) {}

int Matrix::get(int i, int j) const { return data[i][j]; }

void Matrix::set(int i, int j, int value) { data[i][j] = value; }

Matrix Matrix::operator-(const Matrix& other) const {
    Matrix result(data.size());
    for (int i = 0; i < data.size(); ++i) {
        for (int j = 0; j < data[i].size(); ++j) {
            result.set(i, j, get(i, j) - other.get(i, j));
        }
    }
    return result;
}

bool Matrix::operator==(const Matrix& other) const {
    return data == other.data;
}

double Matrix::norm() const {
    double sum = 0;
    for (const auto& row : data) {
        for (int value : row) {
            sum += value * value;
        }
    }
    return std::sqrt(sum);
}

std::istream& operator>>(std::istream& in, Matrix& matrix) {
    std::cout << "¬вед≥ть матрицю\n";
    for (auto& row : matrix.data) {
        for (int& value : row) {
            in >> value;
        }
    }
    std::cout << "ћатриц€ усп≥шно заповнена!\n";
    return in;
}

std::ostream& operator<<(std::ostream& out, const Matrix& matrix) {
    for (const auto& row : matrix.data) {
        for (int value : row) {
            out << value << ' ';
        }
        out << '\n';
    }
    return out;
}
