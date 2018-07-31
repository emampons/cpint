#include <iostream>
#include "bigint/bigint.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using testing::Eq;

namespace  {
    class BigIntTest : public testing::Test{
    public:
        BigInt test;
    };
}

TEST_F(){
    ASSERT_EQ("",  "");
}