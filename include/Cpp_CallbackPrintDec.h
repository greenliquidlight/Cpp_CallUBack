// Header for c++ call with callback functions to be used with demo
#ifndef CPP_CALLBACKPRINTDEC_H
#define CPP_CALLBACKPRINTDEC_H

#include <Cpp_CallbackInterface.h>

namespace CallbackLibrary
{
    /// <summary>
    /// Class for c++ call with callback functions to be used with demo
    /// </summary>
    class Cpp_CallbackPrintDec : public CppCallbackInterface
    {
        public:
            /// <summary>
            /// Callback function to be called from c++ code
            /// </summary>
            /// <param name="number">Number to be printed</param>
            /// <param name="buffer">Buffer for return string</param>
            void callbackFunction(int number, std::string& buffer) override;
    };
}
#endif // CPP_CALLBACKPRINTDEC_H