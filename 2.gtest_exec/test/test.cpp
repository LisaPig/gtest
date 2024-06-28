#include "gtest/gtest.h"
#include <iostream>
#include <string>

#include "func.h"

using namespace std;


// The fixture for testing class Foo.
class FooTest : public testing::Test
{
protected:
    // You can remove any or all of the following functions if their bodies would
    // be empty.

    FooTest()
    {
        // You can do set-up work for each test here.
        cout << "FootTest()" << endl;
    }

    ~FooTest() override
    {
        // You can do clean-up work that doesn't throw exceptions here.
        cout << "FooTest()" << endl;
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    void SetUp() override
    {
        // Code here will be called immediately after the constructor (right
        // before each test).
        cout << "SetUp()" << endl;
    }

    void TearDown() override
    {
        // Code here will be called immediately after each test (right
        // before the destructor).
        cout << "TearDown()" << endl;
    }

    // Class members declared here can be used by all tests in the test suite
    // for Foo.
};

TEST_F(FooTest, test_add_func)
{
    EXPECT_EQ(2, add(1, 1));
    EXPECT_EQ(5, add(-1, 6));
    EXPECT_EQ(-2, add(-1, -1));
    cout << "test_add_func end" << endl;
}

TEST_F(FooTest, test_del_func)
{
    EXPECT_EQ(0, del(1, 1));
    EXPECT_EQ(-7, del(-1, 6));
    cout << "test_del_func end" << endl;
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
