# include <iostream>

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


int main()
{
    Animals animal;
    Dog dog;
    Cat cat;
    
    animal.animalsound();
    dog.animalsound();
    cat.animalsound();
    return 0;
}