#include <iostream>
#include <string>

#if defined(_WIN32)
    #define PLATFORM_NAME "Windows"
#elif defined(__linux__)
    #define PLATFORM_NAME "Linux"
#else
    #define PLATFORM_NAME "Unknown OS"
#endif

int main() {
    // 打印程序运行的平台信息
    std::cout << "Hello from C++!" << std::endl;
    std::cout << "This executable was compiled for: " << PLATFORM_NAME << std::endl;
    return 0;
}