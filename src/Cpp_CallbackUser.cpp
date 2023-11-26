#include <Cpp_CallbackUser.h>

namespace CallbackLibrary
{
    Cpp_CallbackUser::Cpp_CallbackUser(CppCallbackInterface* callback) : callback(callback) {}

    void Cpp_CallbackUser::registerCallback(CppCallbackInterface* callback)
    {
        this->callback = callback;
    }

    void Cpp_CallbackUser::invokeCallback(int number, std::string& buffer)
    {
        callback->callbackFunction(number, buffer);
    }

}