#include <iostream>
using namespace std;

class GrapficsRender
{
public:
    // void renderr()
    virtual void renderr()
    {
        cout << "\nGrapficsRender renderr";
    }
};

class Render2D : public GrapficsRender
{
public:
    void renderr()
    {
        cout << "\nRender2D  renderr";
    }
};

class RenderVR : public GrapficsRender
{
public:
    void renderr()
    {
        cout << "\nRenderVR  renderr";
    }
};

class Render3D : public GrapficsRender
{
public:
    void renderr()
    {
        cout << "\nRender3D renderr";
    }
};

int main()
{
    GrapficsRender *GrapficsRenders[10];
    for (int i = 0; i < 10; i++)
    {
        if (i / 2 == 0)
        {
            GrapficsRenders[i] = new Render2D();
        }
        else if (i % 2 == 0)
        {
            GrapficsRenders[i] = new RenderVR();
        }
        else
        {
            GrapficsRenders[i] = new Render3D();
        }
    }

    for (int i = 0; i < 10; i++)
    {
        GrapficsRenders[i]->renderr();
    }

    return 0;
}