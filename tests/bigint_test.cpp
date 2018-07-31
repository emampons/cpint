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
    ASSERT_EQ("1", "1");
}

TEST_F(BigIntTest,addBigIntLongs){
    ASSERT_EQ("sum", "sum");
}