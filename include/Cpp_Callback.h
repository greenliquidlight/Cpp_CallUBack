// Header for c++ call with callback functions to be used with demo
#ifndef CPP_CALLBACK_H
#define CPP_CALLBACK_H
#include <string>
#include <functional>

using namespace std;

class Cpp_Callback
{
    public:
        Cpp_Callback();
        ~Cpp_Callback();
        void registerCallback(std::function<void(int)> callback);
        void runCallback(int value);
        
        void printNumberInDec(int number, string& buffer);
        void printNumberInHex(int number, string& buffer);

    private:
        std::function<void(int)> callbackFunction;

};

#endif // CPP_CALLBACK_H