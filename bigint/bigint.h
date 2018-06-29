#ifndef CINT_BIGINT_H
#define CINT_BIGINT_H

#include <array>
#include <string>

class BigInt {
private:
    std::array digits;
    std::string string_digits;

public:
    BigInt();
    explicit BigInt(int );
    explicit BigInt(std::string);
    ~BigInt();

    BigInt& operator+(const BigInt& big);
    BigInt& operator*(const BigInt& big );
    BigInt& operator-(const BigInt& big);
    BigInt& operator/(const BigInt& big);

    std::string to_string(BigInt);


};
#endif //CINT_BIGINT_H
