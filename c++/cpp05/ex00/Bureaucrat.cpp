#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const int Grade, const std::string Name)
: Name(Name), Grade(Grade) {}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {}

Bureaucrat Bureaucrat::operator<<(const Bureaucrat &other) {return Bureaucrat(*this);}

Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getGrade() {return (this->Grade);}
std::string Bureaucrat::getName() {return (this->Name);}

void Bureaucrat::incrementGrade() {(this->Grade++);}
void Bureaucrat::decrementGrade() {(this->Grade--);}