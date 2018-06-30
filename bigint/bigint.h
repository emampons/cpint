#ifndef CINT_BIGINT_H
#define CINT_BIGINT_H

#include <vector>
#include <string>

class BigInt {
private:
    std::vector<int> digits;
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

    std::string to_string();


};
#endif //CINT_BIGINT_H
