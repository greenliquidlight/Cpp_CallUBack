#include <gtest/gtest.h>
#include <Cpp_Callback.h>

TEST(Cpp_Callback, PrintNumberInHex) {
    Cpp_Callback callback;
    string buffer = "Number: ";
    int number = 255;
    callback.printNumberInHex(number, buffer);
    EXPECT_EQ(buffer, "Number: 0xFF");
}

TEST(Cpp_Callback, PrintNumberInDecimal) {
    Cpp_Callback callback;
    string buffer = "Number: ";
    int number = 255;
    callback.printNumberInDec(number, buffer);
    EXPECT_EQ(buffer, "Number: 255");
}

TEST(Cpp_Callback, CallCallback) {
    Cpp_Callback callback;
    int value = 255;
    // todo: set and call callback

}