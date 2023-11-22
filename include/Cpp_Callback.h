// Header for c++ call with callback functions to be used with demo
#ifndef CPP_CALLBACK_H
#define CPP_CALLBACK_H
#include <string>
#include <functional>

using namespace std;

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

class Cpp_Callback
{
    public:
        Cpp_Callback();
        ~Cpp_Callback();
        DLL_EXPORT void registerCallback(std::function<void(int)> callback);
        DLL_EXPORT void runCallback(int value);
        
        DLL_EXPORT void printNumberInDec(int number, string& buffer);
        DLL_EXPORT void printNumberInHex(int number, string& buffer);

    private:
        std::function<void(int)> callbackFunction;

};

#endif // CPP_CALLBACK_H