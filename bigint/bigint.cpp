#include <iostream>
#include "bigint.h"

BigInt::BigInt() = default;

BigInt::BigInt(int number) {
    while(number > 0){
        digits.push_back(number%10);
        number /= 10;
    }
}

BigInt::BigInt(std::string number) {
    unsigned long length = number.length();


}


BigInt::~BigInt() {

}

std::string BigInt::to_string() {
    for(auto x:digits){
        std::cout<<x << " ";
    }
}
//
//BigInt & BigInt::operator+(const BigInt& big) {
//    return <#initializer#>;
//}
//
//BigInt & BigInt::operator-(const BigInt& big) {
//    return <#initializer#>;
//}
//
//BigInt & BigInt::operator/(const BigInt& big) {
//    return <#initializer#>;
//}
//
//
//BigInt &BigInt::operator*(const BigInt &big) {
//    return <#initializer#>;
//}

