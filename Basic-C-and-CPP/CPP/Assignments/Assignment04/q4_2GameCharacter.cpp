#include <iostream>
using namespace std;
class GameCharacter
{
public:
    // void attack()
    virtual void attack()
    {
        cout << "\nGame Character attack";
    }
};

class Worrier : public GameCharacter
{
public:
    void attack()
    {
        cout << "\nWorrier  attack";
    }
};

class Mage : public GameCharacter
{
public:
    void attack()
    {
        cout << "\nMage  attack";
    }
};

class Archer : public GameCharacter
{
public:
    void attack()
    {
        cout << "\nArcher attack";
    }
};
class Trickster : public GameCharacter
{
public:
    void attack()
    {
        cout << "\nTrickster attack";
    }
};

int main()
{
    GameCharacter *gameCharacters[10];
    for (int i = 0; i < 10; i++)
    {
        if (i / 2 == 0)
        {
            gameCharacters[i] = new Worrier();
        }
        else if (i % 2 == 0)
        {
            gameCharacters[i] = new Mage();
        }
        else if (i % 3 == 0)
        {
            gameCharacters[i] = new Archer();
        }
        else
        {
            gameCharacters[i] = new Trickster();
        }
    }
    for (int i = 0; i < 10; i++)
    {
        gameCharacters[i]->attack();
    }

    return 0;
}