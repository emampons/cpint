#ifndef CINT_BIGINT_H
#define CINT_BIGINT_H

#include <array>
#include <string>

class BigInt {
private:
    static const int DEFAULT_SIZE = 20;
    int size = 19;
    std::array<int, DEFAULT_SIZE> digits = {};
    int* resize();

public:
    BigInt();
    explicit BigInt(long long);
    explicit BigInt(std::string);
    ~BigInt();

    // Addition
    BigInt operator+(const BigInt&);
    BigInt& operator+=(const BigInt&);
    // Multiplication
    BigInt operator*(const BigInt&);
    BigInt& operator*=(const BigInt&);
    // Subtraction
    BigInt operator-(const BigInt&);
    BigInt& operator-=(const BigInt&);
    // Division
    //BigInt operator/(const BigInt&);
    //BigInt& operator/=(const BigInt&);

    std::string to_string();


};
#endif //CINT_BIGINT_H
