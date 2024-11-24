#include "stk.h"

int main()
{
    string str;
    cout << "Enter a String : ";
    cin >> str;
    int len = str.length();
    MyStack palStack(len);

    if (isPalindrome(palStack, str, len))
        cout << "\nString Is Palindrome..!";
    else
        cout << "\nString isn't palindrome..!";

    return 0;
}

bool isPalindrome(MyStack &sta, string str, int len)
{

    for (int i = 0; i < len; i++)
    {
        sta.push(str.at(i));
    }

    char current;
    for (int i = 0; i < len; i++)
    {
        current = str.at(i);
        char topp;

        if (sta.peek(topp))
        {
            if (topp == current)
            {
                sta.pop(topp);
                continue;
            }
            return false;
        }
    }
    return true;
}