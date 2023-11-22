#include <Cpp_Callback.h>
#include <sstream>
#include <iomanip>

/// <summary>
/// Default constructor
/// </summary>
Cpp_Callback::Cpp_Callback()
{
}

/// <summary>
/// Default destructor
/// </summary>
Cpp_Callback::~Cpp_Callback()
{
}

/// <summary>
/// Set the callback function
/// </summary>
/// <param name="callback">The callback function</param>
void Cpp_Callback::registerCallback(std::function<void(int)> callback) 
{
    callbackFunction = callback;
}


/// <summary>
/// Call the callback function
/// </summary>
/// <param name="value">The value to pass to the callback function</param>
void Cpp_Callback::runCallback(int value)
{
    callbackFunction(value);
}

/// <summary>
/// Print the number in decimal format
/// </summary>
/// <param name="number">The number to print</param>
/// <param name="buffer">The buffer to print to</param>
void Cpp_Callback::printNumberInDec(int number, string& buffer)
{
    buffer += to_string(number);
}

/// <summary>
/// Print the number in hexadecimal format
/// </summary>
/// <param name="number">The number to print</param>
/// <param name="buffer">The buffer to print to</param>
void Cpp_Callback::printNumberInHex(int number, string& buffer)
{
    std::ostringstream ss; 
    ss << "0x" << std::uppercase << std::hex << number;
    buffer += ss.str();
}

