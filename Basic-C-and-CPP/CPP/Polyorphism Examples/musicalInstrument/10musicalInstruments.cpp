#include <iostream>
#include <Windows.h> // For PlaySound and multimedia functions

using namespace std;

class MusicalInstrument
{
public:
    virtual void playSound() // Made virtual for polymorphism
    // void playSound() // Made virtual for polymorphism
    {
        cout << "\nMusical Instrument Playing";
    }
};

class Guitar : public MusicalInstrument
{
public:
    void playSound()
    {
        if (!PlaySound(TEXT("guitar.wav"), NULL, SND_FILENAME | SND_ASYNC))
        {
            cout << "Error loading sound file for Guitar!\n";
        }
        else
        {
            cout << "\nGuitar Playing...";
        }
    }
};

class Piano : public MusicalInstrument
{
public:
    void playSound()
    {
        if (!PlaySound(TEXT("piano.wav"), NULL, SND_FILENAME | SND_ASYNC))
        {
            cout << "Error loading sound file for Piano!\n";
        }
        else
        {
            cout << "\nPiano Playing...";
        }
    }
};

class Drum : public MusicalInstrument
{
public:
    void playSound()
    {
        if (!PlaySound(TEXT("drum.wav"), NULL, SND_FILENAME | SND_ASYNC))
        {
            cout << "Error loading sound file for Drum!\n";
        }
        else
        {
            cout << "\nDrum Playing...";
        }
    }
};

class Flute : public MusicalInstrument
{
public:
    void playSound()
    {
        if (!PlaySound(TEXT("Flute.wav"), NULL, SND_FILENAME | SND_ASYNC))
        {
            cout << "Error loading sound file for Flute!\n";
        }
        else
        {
            cout << "\nFlute Playing...";
        }
    }
};

int main()
{
    MusicalInstrument *musicalInstruments[10];
    int ch;

    musicalInstruments[0] = new Flute();
    musicalInstruments[1] = new Drum();
    musicalInstruments[2] = new Guitar();
    musicalInstruments[3] = new Piano();

    do
    {
        cout << "\nChoose What Do You want to Play :" << endl;
        cout << "1) Flute \t2) Drum \t3) Guitar \t 4) Piano \n0) To Exit ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            musicalInstruments[ch - 1]->playSound();
            Sleep(5000);
            break;
        case 2:
            musicalInstruments[ch - 1]->playSound();
            Sleep(5000);
            break;
        case 3:
            musicalInstruments[ch - 1]->playSound();
            Sleep(5000);
            break;
        case 4:
            musicalInstruments[ch - 1]->playSound();
            Sleep(5000);
            break;

        default:
            cout << "\nInvalid Choice";
            break;
        }

    } while (ch != 0);

    // Clean up memory
    for (int i = 0; i < 10; i++)
    {
        delete musicalInstruments[i];
    }

    return 0;
}

// #include <iostream>

// using namespace std;
// class MusicalInstrument
// {
// public:
//     void playSound()
//     // virtual void playSound()
//     {
//         cout << "\nMusical Instrument Playing";
//     }
// };

// class Guitar : public MusicalInstrument
// {
// public:
//     void playSound()
//     {
//         cout << "\nGuitar Playing";
//     }
// };

// class Piano : public MusicalInstrument
// {
// public:
//     void playSound()
//     {
//         cout << "\nPiano Playing";
//     }
// };

// class Drum : public MusicalInstrument
// {
// public:
//     void playSound()
//     {
//         cout << "\nDrum Playing";
//     }
// };
// class Flute : public MusicalInstrument
// {
// public:
//     void playSound()
//     {
//         cout << "\nFlute Playing";
//     }
// };

// int main()
// {
//     MusicalInstrument *musicalInstruments[10];
//     for (int i = 0; i < 10; i++)
//     {
//         if (i / 2 == 0)
//         {
//             musicalInstruments[i] = new Flute();
//         }
//         else if (i % 2 == 0)
//         {
//             musicalInstruments[i] = new Guitar();
//         }
//         else if (i % 3 == 0)
//         {
//             musicalInstruments[i] = new Piano();
//         }
//         else
//         {
//             musicalInstruments[i] = new Drum();
//         }
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         musicalInstruments[i]->playSound();
//     }

//     return 0;
// }
