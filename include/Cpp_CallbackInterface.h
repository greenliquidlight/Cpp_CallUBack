#ifndef CPP_CALLBACK_INTERFACE_H
#define CPP_CALLBACK_INTERFACE_H

#include <string>
#include <iostream>

namespace CallbackLibrary
{
    class CppCallbackInterface
    {
    public:
        virtual void callbackFunction(int number, std::string& buffer) = 0;
        virtual ~CppCallbackInterface() {} // ensure cleanup of derived class
    };
}

#endif // CPP_CALLBACK_INTERFACE_H