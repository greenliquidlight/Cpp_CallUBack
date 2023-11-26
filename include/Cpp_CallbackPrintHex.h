// Header for c++ call with callback functions to be used with demo
#ifndef CPP_CALLBACKPRINTHEX_H
#define CPP_CALLBACKPRINTHEX_H

#include <Cpp_CallbackInterface.h>

namespace CallbackLibrary
{
    class Cpp_CallbackPrintHex : public CppCallbackInterface
    {
        public:
            void callbackFunction(int number, std::string& buffer) override;
    };
}
#endif // CPP_CALLBACKPRINTHEX_H