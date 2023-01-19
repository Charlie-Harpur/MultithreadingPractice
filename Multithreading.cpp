#include <iostream>
#include <thread>
#include <windows.h>

void funct(int start)
{
    for (int i = start; i < (start + 100); i += 2)
    {
        Sleep(10);
        std::cout << i << "\n";
    }
}

int main()
{
    int x = 1;
    std::thread th1(funct, x);
    Sleep(100);
    std::cout << "TEST" << std::endl;

    th1.join();

    std::cout << "TEST2" << std::endl;

    return 0;
}
