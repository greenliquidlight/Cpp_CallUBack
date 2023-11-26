#include <gtest/gtest.h>
#include <Cpp_CallbackPrintHex.h>
#include <Cpp_CallbackPrintDec.h>
#include <Cpp_CallbackUser.h>
#include <string>


TEST(Cpp_Callback, PrintNumberInHex) {

    std::string buffer = "Number: ";
    int number = 255;
    CallbackLibrary::Cpp_CallbackPrintHex callback;
    callback.callbackFunction(number, buffer);
    EXPECT_EQ(buffer, "Number: 0xFF");
}

TEST(Cpp_Callback, PrintNumberInDecimal) {
    std::string buffer = "Number: ";
    int number = 255;
    CallbackLibrary::Cpp_CallbackPrintDec callback;
    callback.callbackFunction(number, buffer);
    EXPECT_EQ(buffer, "Number: 255");
}

TEST(Cpp_Callback, CallbackUser) {
    CallbackLibrary::Cpp_CallbackPrintDec callbackDec;
    CallbackLibrary::Cpp_CallbackPrintHex callbackHex;
    CallbackLibrary::Cpp_CallbackUser callbackUser(&callbackDec);
    std::string buffer = "Number: ";
    int number = 255;
    callbackUser.invokeCallback(number, buffer);
    EXPECT_EQ(buffer, "Number: 255");
    callbackUser.registerCallback(&callbackHex);
    buffer = "Number: ";
    callbackUser.invokeCallback(number, buffer);
    EXPECT_EQ(buffer, "Number: 0xFF");
}