#include <Cpp_CallbackPrintDec.h>
#include <iomanip>

namespace CallbackLibrary
{
    void Cpp_CallbackPrintDec::callbackFunction(int number, std::string& buffer)
    {
        buffer += std::to_string(number);
    }
}