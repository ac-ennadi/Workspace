#include <iostream>
#include <string>

/* Encapsulation

 access specifiers:
 private: Members can only be accessed from inside the class itself. 
             External code cannot see or change them.
             
 public: Members can be accessed from anywhere outside the class.

protected: allows a derived class to access the private members

*/
// class -> Blue Print

//parent class (base class) --> inherited from
class Person
{
    //data members -->> varibles
    //thos are a member fuctions and variable c --->> attribute
    protected: //it was private:
        std::string fname;
        std::string sname;
    public: //->> this is the public keyword
    //methods -->> functions
        Person() = default; // U can use 'Person() {}' this is the default constractor
        Person(std::string fname, std::string sname): fname(fname), sname(sname){} //this is the custom  constractor
        void PrintFullName();
        virtual void getInfo(); //getter
        /* virtual tell the compiler this function can
        be replaced with the similer function in the child class */
        void SetFullName(std::string fname, std::string sname); //  Setters
};


void Person::SetFullName(std::string fname, std::string sname) {(*this).fname = fname; this->sname = sname;}

void Person::PrintFullName()    {std::cout << fname << " " << sname << std::endl;}

void Person::getInfo()   {std::cout << "first name: " << fname << std::endl << "last name: " << sname << std::endl;}
//inheritance

//child class (derived class) 
class Someone : public Person
{
    private:
        std::string Departement;
    public:
        Someone (std::string FirstName, std::string LastName, std::string Departement) : Person(FirstName, LastName), Departement(Departement){}
        void    getInfo() override; 
        /* override tell the compiler this this function can
        override the similer function in the parent class */
};

void Someone::getInfo()  {std::cout << "firstName: " << fname << std::endl << "lastName: " << sname << std::endl << "Departement: " << Departement << std::endl;};

int main()
{
    // instances == object -> Creating instances of the class 'person'
    // Interacting == create an object from a class 
    Person someone("hamzaaa", "hamzoooo");
    someone.getInfo();

    Someone person("achraf", "ennadiri", "1337");
    person.getInfo();
    // Interacting -> Interacting with the instances
    return (0);
}