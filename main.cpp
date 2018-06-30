#include <iostream>
#include "bigint/bigint.h"

int main() {
    BigInt test_int (5);

    std::cout<<test_int.to_string();
    return 0;
}