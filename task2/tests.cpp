#include "gtest/gtest.h"

#include "oop2.h"

TEST(HashtagTest, WordsInput)
{
    EXPECT_EQ(hashtaging("hello world"),"#HelloWorld");
    EXPECT_EQ(hashtaging("   hello world"),"#HelloWorld");
    EXPECT_EQ(hashtaging("   hello world   "),"#HelloWorld");
    EXPECT_EQ(hashtaging("hello    world"),"#HelloWorld");
    EXPECT_EQ(hashtaging("helloworld"),"#Helloworld");
}
