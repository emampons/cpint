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
    BigInt(int );
    BigInt(std::string);
    ~BigInt();


    std::string to_string(BigInt);


};
#endif //CINT_BIGINT_H
