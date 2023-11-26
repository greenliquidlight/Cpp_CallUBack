#include <Cpp_CallbackPrintHex.h>
#include <sstream>

namespace CallbackLibrary
{
    void Cpp_CallbackPrintHex::callbackFunction(int number, std::string& buffer)
    {
            std::ostringstream ss; 
            ss << "0x" << std::uppercase << std::hex << number;
            buffer += ss.str();
    }
}