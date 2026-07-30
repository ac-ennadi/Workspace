#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat {
private:
    const std::string name;
    int grade;
    static const int highest = 1;
    static const int lowest = 150;

public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

    const std::string &getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif