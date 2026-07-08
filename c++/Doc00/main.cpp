#include <iostream>


// class -> Blue Print
class Person
{
    //data members -->> varibles
    //thos are a member fuctions and variable c --->> attribute
    private:
        std::string fname;
        std::string sname;
    public: //->> this is the public keyword
        //methods -->> functions
        void PrintFullName();
        void SetFullName(std::string fname, std::string sname);
};

void Person::SetFullName(std::string fname, std::string sname) {(*this).fname = fname; this->sname = sname;}

void Person::PrintFullName() {std::cout << fname << " " << sname << std::endl;}

int main()
{
    // instances == object -> Creating instances of the class 'person'
    // Interacting == create an object from a class 
    Person person;
    Person person1;

    // Interacting -> Interacting with the instances
    person.SetFullName("Hamza", "kadir");
    person.PrintFullName();
    person.SetFullName("achraf", "ennadiri");
    person.PrintFullName();
    return (0);
}