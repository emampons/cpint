#include <iostream>
#include "bigint/bigint.h"

int main() {
    //BigInt test_int (50);
    BigInt test_int("9");
    BigInt num2(6);
    BigInt res = test_int+num2;
    //res *= test_int;

    std::cout<<res.to_string();
    return 0;
}