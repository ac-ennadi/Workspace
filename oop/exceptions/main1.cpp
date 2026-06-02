#include <iostream>
#include <cstdlib>

int main()
{
    int x = 7;

    try {
        if (x % 2 != 0)
            throw "its unpair Value";
    }
    catch (const char *str)
    {
        std::cout << "exception : " << str << std::endl;
        exit(0);
    }
    std::cout << "the program Work correctly" << std::endl;
    return 0;
}