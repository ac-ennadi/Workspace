#include <string>

class Bureaucrat {
    private:
        const std::string Name;
        int Grade;
    public:
        Bureaucrat();
        Bureaucrat(const int Grade, const std::string Name);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat operator<<(const Bureaucrat &other);
        ~Bureaucrat();

        int getGrade();
        std::string getName();
        void incrementGrade();
        void decrementGrade();

        void GradeTooHighException();
        void GradeTooLowException();

};