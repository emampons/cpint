#include <iostream>
#include <sstream>
#include "bigint.h"


BigInt::BigInt() = default;

BigInt::BigInt(long long number) {
    while(number > 0){
        if(size > -1 ){
            digits[size] = number%10;
            number /= 10;
            size--;
        }
        else{
            resize();
        }
    }
}

struct NotABigIntException: public std::exception
{
    virtual const char* what() const throw()
    {
        return "This is not a valid big integer";
    }
} NotABigIntException;


BigInt::BigInt(std::string number) {
    std::size_t found = number.find_first_not_of("1234567890");
    // Makes sure string only contains numbers and no other characters
    if(found == std::string::npos){
        unsigned long length = number.length();
        while(length){
            char temp = number[length-1];
            int place = temp - '0';
            if(size > -1){
                digits[size] = place;
                size--;
                length--;
            }
            else{
                resize();
                digits[size] = place;
                size--;
                length--;
            }

        }

    }
    else {
        throw NotABigIntException;
    }

}





BigInt::~BigInt() = default;


BigInt BigInt::operator+(const BigInt &big) {
    BigInt ref = *this;
    ref += big;
    return ref;
}

BigInt& BigInt::operator+=(const BigInt& big) {
    auto this_iterator = digits.end()-1;
    auto that_iterator = big.digits.end()-1;
    int sum = 0;
    size = digits.size();

    while(this_iterator != digits.begin() || that_iterator != big.digits.begin()){

        if(that_iterator != big.digits.begin()){
            sum += *that_iterator;
            --that_iterator;
        }
        if(this_iterator != digits.begin()){
            sum += *this_iterator;
            --size;
        }
//        else{
//           // accounts for when second number is longer than first
//            digits[size] = 0;
//            this_iterator = digits.begin()+1;
//        }

        *this_iterator = sum % 10;
        --this_iterator;

        sum /= 10;

    }

    if(sum)
       digits[size] = 1;

    return *this;
}



BigInt BigInt::operator-(const BigInt& big) {
    BigInt ref = *this;
    ref -= big;
    return ref;
}

BigInt& BigInt::operator-=(const BigInt& big) {
    auto this_iterator = digits.begin();
    auto that_iterator = big.digits.begin();
    int difference = 0;
    while(that_iterator != big.digits.end() || this_iterator != digits.end()){
        int borrow = 0;
        if(this_iterator != digits.end()){

        }
    }
    return *this;
}



BigInt BigInt::operator*(const BigInt &big) {
    BigInt ref = *this;
    ref *= big;
    return ref;
}

BigInt& BigInt::operator*=(const BigInt& big) {
//    auto this_iterator = digits.begin();
//    auto that_iterator = big.digits.begin();
//    BigInt ret (1);
//    for(;this_iterator != digits.end(); this_iterator++){
//        for(; that_iterator != big.digits.end(); that_iterator++){
//            ret += *that_iterator * *this_iterator;
//        }
//
//
//
//    }
    return *this;
}


std::string BigInt::to_string() {
    std::ostringstream stream;
    for(int i = size-1; i < digits.size(); i++)
        stream<<digits[i];
    std::string ret = stream.str();

    return ret;
}

int *BigInt::resize() {
    return nullptr;
}







