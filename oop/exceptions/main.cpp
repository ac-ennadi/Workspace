#include <iostream>
#include <ostream>


int main()
{
    int index = 5;
    const int size = 5;
    int arr[size] = {0, 22, 44, 66, 88};

    try {
            if (index > 4)
                throw "invalid index";
            std::cout << "arr[" << index << "]: " << arr[index] << std::endl;

    }
    catch (const char *str)
    {
        std::cout << str << std::endl;
    }
    return (0);
} 