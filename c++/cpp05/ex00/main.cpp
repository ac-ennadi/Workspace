# include <exception>
# include <iostream>
# include "Bureaucrat.hpp"

int main()
{
   try{
      Bureaucrat p1("achraf", 150);

      std::cout << p1 << std::endl;
      p1.decrementGrade();
      std::cout << "Name: " << p1.getName() << std::endl << "grade: " << p1.getGrade() << std::endl;
   }
   catch (std::exception &e)
   {
      std::cout << "The Catched exception: " << e.what() << std::endl;
   }
   return (0);
}