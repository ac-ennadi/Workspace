#include <iostream>
#include <string>

// private: Members can only be accessed from inside the class itself. 
//             External code cannot see or change them.
// public: Members can be accessed from anywhere outside the class.

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
        Person() = default; //this is the default constractor
        Person(std::string fname, std::string sname): fname(fname), sname(sname){} //this is the custom  constractor
        void PrintFullName();
        std::string GetfullName(); //getter
        void SetFullName(std::string fname, std::string sname); //  Setters
};

void Person::SetFullName(std::string fname, std::string sname) {(*this).fname = fname; this->sname = sname;}

void Person::PrintFullName()    {std::cout << fname << " " << sname << std::endl;}

std::string Person::GetfullName()   {return fname + "" + sname;}

int main()
{
    // instances == object -> Creating instances of the class 'person'
    // Interacting == create an object from a class 
    Person person("Achraf", "ennadiri");
    Person person1;

    // Interacting -> Interacting with the instances
    person.PrintFullName();
    person.SetFullName("hamza", "kadir");
    person.PrintFullName();
    return (0);
}