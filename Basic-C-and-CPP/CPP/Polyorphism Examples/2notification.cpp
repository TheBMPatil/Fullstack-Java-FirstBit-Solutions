#include <iostream>
using namespace std;

class Notification
{
public:
    // void send()
    virtual void send()
    {
        cout << "\nNotification send";
    }
};

class EmailNotification : public Notification
{
public:
    void send()
    {
        cout << "\nEmailNotification  send";
    }
};

class SMSNotification : public Notification
{
public:
    void send()
    {
        cout << "\nSMSNotification  send";
    }
};

class PushNotification : public Notification
{
public:
    void send()
    {
        cout << "\nPushNotification send";
    }
};

int main()
{
    Notification *Notifications[5];
    for (int i = 0; i < 5; i++)
    {
        if (i / 2 == 0)
        {
            Notifications[i] = new EmailNotification();
        }
        else if (i % 2 == 0)
        {
            Notifications[i] = new SMSNotification();
        }
        else
        {
            Notifications[i] = new PushNotification();
        }
    }

    for (int i = 0; i < 5; i++)
    {
        Notifications[i]->send();
    }

    return 0;
}