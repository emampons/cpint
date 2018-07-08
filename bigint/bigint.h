#ifndef CINT_BIGINT_H
#define CINT_BIGINT_H

#include <vector>
#include <string>

class BigInt {
private:
    std::vector<int> digits;


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
