#include <iostream>
#include "bigint/bigint.h"

int main() {
    //BigInt test_int (50);
    BigInt test_int("5");
    BigInt num2(60);
    BigInt res = test_int+num2;

    std::cout<<res.to_string();
    return 0;
}