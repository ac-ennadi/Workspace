# include <iostream>
# include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("Alice", 2);
        std::cout << a << std::endl;
        a.incrementGrade(); // becomes 1
        std::cout << a << std::endl;
        a.incrementGrade(); // should throw
    } catch (const std::exception &e) {
        std::cout << "exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b("Bob", 150);
        std::cout << b << std::endl;
        b.decrementGrade(); // should throw
    } catch (const std::exception &e) {
        std::cout << "exception: " << e.what() << std::endl;
    }

    return 0;
}