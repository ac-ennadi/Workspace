#include <exception>
# include <iostream>
#include <new>
#include <stdexcept>
# include "Bureaucrat.hpp"

using namespace std;

int main()
{
    string str = "achraf";


    try
    {
        throw runtime_error("i just create this one\n");
        std::cout << str.at(9) << endl;
        int *ptr  = new int[999999999999999999];
    }
    catch (out_of_range &e)
    {
        cout << "excption: " << e.what() << endl;
    }

    catch (exception &e)
    {
        cout << "excption: " << e.what() << endl;
    }

    return (0);
}