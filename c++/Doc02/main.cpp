#include <exception>
# include <iostream>
#include <stdexcept>

using namespace std;

class new_exceptiom : public exception
{
    virtual const char *what() const noexcept {
            return "new_exceptiom\n";
    }
};

int main()
{
    string str = "achraf";

    try
    {
        throw new_exceptiom();
        throw 55;
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
    catch (int code) {cout << "Code Error: " << code << endl;}

    return (0);
}