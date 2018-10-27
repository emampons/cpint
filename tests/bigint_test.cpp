#include <iostream>
#include  "../bigint/bigint.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using testing::Eq;

namespace  {
    class BigIntTest : public testing::Test{
    public:
        BigInt num1;
        BigInt num2;
        BigIntTest (){
          num1;
          num2;
        }
    };
}

TEST_F(BigIntTest, createBigIntLong){
    num1 = BigInt(56);
    ASSERT_EQ("56", num1.to_string());
}

TEST_F(BigIntTest,createBigIntString){
    num2 = BigInt("45");
    ASSERT_EQ("45", num2.to_string());
}

TEST_F(BigIntTest,addBigIntLongs){
    num1 = BigInt(56);
    num1 = num1 + num1;
    ASSERT_EQ("112", num1.to_string());

}

TEST_F(BigIntTest,addBigIntStrings){
    num2 = BigInt("45");
    num2 = num2 + num2;
    ASSERT_EQ("90", num2.to_string());
}

TEST_F(BigIntTest,addDifferent){
    num1 = BigInt(56);
    num2 = BigInt("45");
    num1 = num1 + num2;
    ASSERT_EQ("101", num1.to_string());

    num1 = num1 + num2;
    ASSERT_EQ("157", num1.to_string());

}

