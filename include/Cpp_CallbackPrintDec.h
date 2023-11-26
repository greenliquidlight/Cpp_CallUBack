// Header for c++ call with callback functions to be used with demo
#ifndef CPP_CALLBACKPRINTDEC_H
#define CPP_CALLBACKPRINTDEC_H

#include <Cpp_CallbackInterface.h>

namespace CallbackLibrary
{
    class Cpp_CallbackPrintDec : public CppCallbackInterface
    {
        public:
            void callbackFunction(int number, std::string& buffer) override;
    };
}
#endif // CPP_CALLBACKPRINTDEC_H