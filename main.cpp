#include <iostream>
#include "gtest/gtest.h"


//Recursive function to get the number of 1's in the binary representation of a number.
// Uses the fact that the the number of 1's is equal to the number of 1's of half of the number
// or half the number + 1 if the number is odd

int GetBinOnes(int n)
{
    if (n < 2)
        return n;
    return n % 2 + GetBinOnes(n /2 );
}

int main(int argc, char** argv) {

    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}


TEST(OnesBinTest, test1)
{
    EXPECT_EQ(GetBinOnes(2039), 10);
    EXPECT_EQ(GetBinOnes(2000), 6);
    EXPECT_EQ(GetBinOnes(1000), 6);
    EXPECT_EQ(GetBinOnes(500), 6);
    EXPECT_EQ(GetBinOnes(250), 6);
    EXPECT_EQ(GetBinOnes(125), 6);
    EXPECT_EQ(GetBinOnes(1),1);
    EXPECT_EQ(GetBinOnes(0),0);
    EXPECT_EQ(GetBinOnes(11),3);
}