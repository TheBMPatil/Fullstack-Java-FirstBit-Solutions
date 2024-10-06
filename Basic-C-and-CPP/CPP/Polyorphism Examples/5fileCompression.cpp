#include <iostream>
using namespace std;

class FileCompressor
{
public:
    // void compress()
    virtual void compress()
    {
        cout << "\nFileCompressor compress";
    }
};

class ZIPcompressor : public FileCompressor
{
public:
    void compress()
    {
        cout << "\nZIPcompressor  compress";
    }
};

class RARCompressor : public FileCompressor
{
public:
    void compress()
    {
        cout << "\nRARCompressor  compress";
    }
};

class GZIPCompressor : public FileCompressor
{
public:
    void compress()
    {
        cout << "\nGZIPCompressor compress";
    }
};

int main()
{
    FileCompressor *FileCompressors[10];
    for (int i = 0; i < 10; i++)
    {
        if (i / 2 == 0)
        {
            FileCompressors[i] = new ZIPcompressor();
        }
        else if (i % 2 == 0)
        {
            FileCompressors[i] = new RARCompressor();
        }
        else
        {
            FileCompressors[i] = new GZIPCompressor();
        }
    }

    for (int i = 0; i < 10; i++)
    {
        FileCompressors[i]->compress();
    }

    return 0;
}