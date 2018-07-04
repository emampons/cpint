#include <iostream>
#include <sstream>
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
        while(length){
            char temp = number[length-1];
            int place = temp - '0';
            digits.push_back(place);
            length--;
        }

}


BigInt::~BigInt() = default;



std::string BigInt::to_string() {
    std::ostringstream stream;
    for(auto &a: digits)
        stream<<a;

    return stream.str();
}

BigInt BigInt::operator+(const BigInt &big) {
    BigInt ref = *this;
    ref += big;
    return ref;
}

BigInt & BigInt::operator+=(const BigInt& big) {
    auto this_iterator = digits.begin();
    auto that_iterator = big.digits.begin();
    int sum = 0;

    while(this_iterator != digits.end() || that_iterator != big.digits.end()){

        if(that_iterator != big.digits.end()){
            sum += *that_iterator;
            ++that_iterator;
        }
        if(this_iterator != digits.end()){
            sum += *this_iterator;
        }
        else{
            digits.push_back(0);
            this_iterator = digits.end()-1;
        }

        *this_iterator = sum % 10;
        ++this_iterator;
        sum /= 10;

    }
    if(sum)
        digits.push_back(1);
    return *this;
}
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

