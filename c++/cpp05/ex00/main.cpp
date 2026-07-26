# include <iostream>
#include <stdexcept>
# include "Bureaucrat.hpp"

using namespace std;

int main()
{
    string str = "achraf";

    try
    {
        std::cout << str.at(9) << endl;
    }
    catch (out_of_range &e)
    {
        cout << "excption: " << e.what() << endl;
    }
    catch (...)
    {
        cout << "Default excption\n";
    }
    return (0);
}