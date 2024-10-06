#include <iostream>
using namespace std;

class DocumentEditor
{
public:
    // void edit()
    virtual void edit()
    {
        cout << "\nDocumentEditor edit";
    }
};

class TextEditor : public DocumentEditor
{
public:
    void edit()
    {
        cout << "\nTextEditor  edit";
    }
};

class PDFEditor : public DocumentEditor
{
public:
    void edit()
    {
        cout << "\nPDFEditor  edit";
    }
};

class SpredsheetEditor : public DocumentEditor
{
public:
    void edit()
    {
        cout << "\nSpredsheetEditor edit";
    }
};

int main()
{
    DocumentEditor *DocumentEditors[5];
    for (int i = 0; i < 5; i++)
    {
        if (i / 2 == 0)
        {
            DocumentEditors[i] = new TextEditor();
        }
        else if (i % 2 == 0)
        {
            DocumentEditors[i] = new PDFEditor();
        }
        else
        {
            DocumentEditors[i] = new SpredsheetEditor();
        }
    }

    for (int i = 0; i < 5; i++)
    {
        DocumentEditors[i]->edit();
    }

    return 0;
}