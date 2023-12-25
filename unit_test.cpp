#include <gtest/gtest.h>
#include "functions.h"

// Test fixture for FuncInProduct
class FuncInProductTest : public ::testing::Test {
protected:
    // If you want to perform setup and cleanup for each test
    virtual void SetUp() {
        // Code to run before each test
    }

    virtual void TearDown() {
        // Code to run after each test
    }
};

// Test case(s) for FuncInProduct
TEST_F(FuncInProductTest, TestMultiplication) {
    // Test with positive integers
    EXPECT_TRUE(FuncInProduct());
}

// Entry point for running the tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}