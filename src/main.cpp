#include <iostream>
#include <thread>

int main()
{
    std::cout << "C++20 Stock Market Predictor Initialized!" << std::endl;

    std::jthread worker([]() {
        std::cout << "C++20 threading is active." << std::endl;
        });

    return 0;
}