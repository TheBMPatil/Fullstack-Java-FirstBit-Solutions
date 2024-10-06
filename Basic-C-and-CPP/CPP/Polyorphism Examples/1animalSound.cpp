#include <iostream>
using namespace std;

class Animal
{
public:
    // virtual void makeSound()
    void makeSound()
    {
        cout << "\nAnimal Sound.....";
    };
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "\nCat Meowing...";
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "\nDog Barking...";
    }
};

class Cow : public Animal
{
public:
    void makeSound()
    {
        cout << "\nCow Mooooo...";
    }
};

class Lion : public Animal
{
public:
    void makeSound()
    {
        cout << "\nLion Roaring...";
    }
};

int main()
{
    Animal *animals[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 4 == 0)
        {
            animals[i] = new Lion();
        }
        else if (i % 4 == 1)
        {
            animals[i] = new Cat();
        }
        else if (i % 4 == 2)
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cow();
        }
    }

    for (int i = 0; i < 10; i++)
    {
        animals[i]->makeSound();
    }

    return 0;
}
