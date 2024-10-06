#include <iostream>
#include <Windows.h> // For  makeSound and multimedia functions

using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0; // Pure virtual function
};

class Cat : public Animal
{
public:
    Cat() {}

    void makeSound() override
    {
        if (!PlaySound(TEXT("cat.wav"), NULL, SND_FILENAME | SND_ASYNC))
        {
            cout << "Error loading sound file for Cat!\n";
        }
        else
        {
            cout << "\nCat Meowing...";
        }
    }
};

class Dog : public Animal
{
public:
    Dog() {}

    void makeSound() override
    {
        if (!PlaySound(TEXT("dog.wav"), NULL, SND_FILENAME | SND_ASYNC))
        {
            cout << "Error loading sound file for Dog!\n";
        }
        else
        {
            cout << "\nDog Barking...";
        }
    }
};

class Cow : public Animal
{
public:
    Cow() {}

    void makeSound() override
    {
        if (!PlaySound(TEXT("cow.wav"), NULL, SND_FILENAME | SND_ASYNC))
        {
            cout << "Error loading sound file for Cow!\n";
        }
        else
        {
            cout << "\nCow Mooooo...";
        }
    }
};

class Lion : public Animal
{
public:
    Lion() {}

    void makeSound() override
    {
        if (!PlaySound(TEXT("lion.wav"), NULL, SND_FILENAME | SND_ASYNC))
        {
            cout << "Error loading sound file for Lion!\n";
        }
        else
        {
            cout << "\nLion Roaring...";
        }
    }
};

int main()
{
    // Array of Animal pointers
    Animal *animals[4];

    animals[0] = new Cat();
    animals[1] = new Dog();
    animals[2] = new Cow();
    animals[3] = new Lion();
    int ch;
    do
    {
        cout << "\nChooseOne animal to Know there sound :" << endl;
        cout << "1) CAT \t2) DOG \t3) COW \t 4) LION \n0) To Exit  :";
        cin >> ch;

        switch (ch)
        {
        case 1:
            animals[ch - 1]->makeSound();
            Sleep(1000);
            break;
        case 2:
            animals[ch - 1]->makeSound();
            Sleep(1000);
            break;
        case 3:
            animals[ch - 1]->makeSound();
            Sleep(1000);
            break;
        case 4:
            animals[ch - 1]->makeSound();
            Sleep(1000);
            break;

        default:
            cout << "\nInvalid Choice";
            break;
        }

    } while (ch != 0);

    // // Play sounds of each animal
    // for (int i = 0; i < 4; i++)
    // {
    //     animals[i]->makeSound();
    //     Sleep(1000); // Sleep for 2 seconds to let each sound play
    // }

    // Clean up
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }

    return 0;
}
