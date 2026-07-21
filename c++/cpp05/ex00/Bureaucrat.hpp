#include <iostream>

class Bureaucrat {
    private:
        const std::string name;
        int grade[150];
    public:
        Bureaucrat();
        ~Bureaucrat();
};