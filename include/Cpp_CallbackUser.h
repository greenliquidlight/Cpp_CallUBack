#ifndef CPP_CALLBACKUSER_H
#define CPP_CALLBACKUSER_H

#include <Cpp_CallbackInterface.h>

namespace CallbackLibrary
{
    /// <summary> 
    /// Class to demonstrate how to use a callback function
    /// </summary>
    class Cpp_CallbackUser
    {
        public:
            /// <summary>
            /// Constructor
            /// </summary>
            /// <param name="callback">Callback function to be registered</param>
            Cpp_CallbackUser(CppCallbackInterface* callback);
            
            /// <summary>
            /// Method to register a callback function
            /// </summary>
            /// <param name="callback">Callback function to be registered</param>
            void registerCallback(CppCallbackInterface* callback);

            /// <summary>
            /// Method to invoke the callback function
            /// </summary>
            /// <param name="number">Number to be printed</param>
            /// <param name="buffer">Buffer store output string</param>
            void invokeCallback(int number, std::string& buffer);

        private:
            /// <summary>
            /// Registered callback function
            /// </summary>
            CppCallbackInterface* callback;
    };
}

#endif // CPP_CALLBACKUSER_H