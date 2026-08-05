#include "Bureaucrat.hpp"

// ------------------ Constructors / Destructor ------------------
Bureaucrat::Bureaucrat() : name("Default"), grade(lowest) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	: name(name), grade(grade)
{
	if (grade < highest)
		throw GradeTooHighException();
	if (grade > lowest)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	: name(other.name), grade(other.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		grade = other.grade; // _name is const
	return *this;
}

Bureaucrat::~Bureaucrat() {}

// ------------------ Accessors ------------------
const std::string &Bureaucrat::getName() const { return name; }
int Bureaucrat::getGrade() const { return grade; }

// ------------------ Modifiers ------------------
void Bureaucrat::incrementGrade()
{
	if (grade <= highest)
		throw GradeTooHighException();
	--grade;
}

void Bureaucrat::decrementGrade()
{
	if (grade >= lowest)
		throw GradeTooLowException();
	++grade;
}

// ------------------ Exceptions ------------------
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

// ------------------ Non-member operators ------------------
std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os; 
}
//the value return the address 
//cout << "fgfg"