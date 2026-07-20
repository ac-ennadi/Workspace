# include <iostream>
#include <ostream>

class Animals {
    public:
        virtual void animalsound();
};

void Animals::animalsound() {std::cout << "animal make a sound!\n";}

class Dog : public Animals {
    public:
        void animalsound() override;
};

void Dog::animalsound() {std::cout << "dog make a sound!\n";}

class Cat : public Animals {
    public:
        void animalsound() override;
};

void Cat::animalsound() {std::cout << "cat make a sound!\n";}


/*
    Static type of a = Animal* (this is what the compiler sees at compile time)
    Dynamic type of a = Dog (this is the actual object it points to at runtime) 
*/

int main()
{
    Animals animal;
    Dog dog;
    Cat cat;
    
    animal.animalsound();
    dog.animalsound();
    cat.animalsound();

    Animals *a;
    Dog b;

    //a now point to the object of dog
    a = &b;
    std::cout << "Adrr of a:" << *&a << std::endl; // drefernce of adderss of the "a"
    std::cout << "Adrr of b:" << &b << std::endl;   //address of b
    a->animalsound();

    return 0;
}