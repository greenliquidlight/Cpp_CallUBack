#ifndef CPP_CALLBACK_INTERFACE_H
#define CPP_CALLBACK_INTERFACE_H

#include <string>
#include <iostream>

namespace CallbackLibrary
{
    /// <summary>
    /// Interface for c++ call with callback functions to be used with demo
    /// </summary>
    class CppCallbackInterface
    {
    public:
        /// <summary>
        /// Callback function to be called from c++ code
        /// </summary>
        /// <param name="number">Number to be printed</param>
        /// <param name="buffer">Buffer for return string</param>
        virtual void callbackFunction(int number, std::string& buffer) = 0;
        
        /// <summary>
        /// Virtual destructor to ensure cleanup of derived class
        /// </summary>
        virtual ~CppCallbackInterface() {} // ensure cleanup of derived class
    };
}

#endif // CPP_CALLBACK_INTERFACE_H