#include <iostream>
using namespace std;
class MusicalInstrument
{
public:
    void playSound()
    // virtual void playSound()
    {
        cout << "\nMusical Instrument Playing";
    }
};

class Guitar : public MusicalInstrument
{
public:
    void playSound()
    {
        cout << "\nGuitar Playing";
    }
};

class Piano : public MusicalInstrument
{
public:
    void playSound()
    {
        cout << "\nPiano Playing";
    }
};

class Drum : public MusicalInstrument
{
public:
    void playSound()
    {
        cout << "\nDrum Playing";
    }
};
class Tuntun : public MusicalInstrument
{
public:
    void playSound()
    {
        cout << "\nTuntun Playing";
    }
};

int main()
{
    MusicalInstrument *musicalInstruments[10];
    for (int i = 0; i < 10; i++)
    {
        if (i / 2 == 0)
        {
            musicalInstruments[i] = new Tuntun();
        }
        else if (i % 2 == 0)
        {
            musicalInstruments[i] = new Guitar();
        }
        else if (i % 3 == 0)
        {
            musicalInstruments[i] = new Piano();
        }
        else
        {
            musicalInstruments[i] = new Drum();
        }
    }

    for (int i = 0; i < 10; i++)
    {
        musicalInstruments[i]->playSound();
    }

    return 0;
}
