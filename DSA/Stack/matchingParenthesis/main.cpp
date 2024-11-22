#include "stk.h"

int main()
{
    string str;
    cout << "Enter a String : ";
    cin >> str;
    int len = str.length();

    MyStack parStack(len);

    for (int i = 0; i < len; i++)
    {
        char current = str.at(i);

        if (current == '{' || current == '[' || current == '(')
        {
            parStack.push(current);
        }

        else if (current == '}' || current == ']' || current == ')')
        {
            char topElement;
            if (parStack.peek(topElement))
            {

                if ((current == '}' && topElement == '{') ||
                    (current == ']' && topElement == '[') ||
                    (current == ')' && topElement == '('))
                {
                    parStack.pop(topElement);
                }
                else
                {

                    cout << "Unbalanced parentheses at index " << i << endl;
                    return 0;
                }
            }
            else
            {
                cout << "Unbalanced parentheses at index " << i << endl;
                return 0;
            }
        }
    }

    if (parStack.isEmpty())
    {
        cout << "The parentheses are balanced." << endl;
    }
    else
    {
        cout << "The parentheses are unbalanced." << endl;
    }

    return 0;
}





































// #include "stk.h"








// int main()
// {
//     string str;
//     cout << "Enter a String : ";
//     cin >> str;
//     int len = str.length();
//     MyStack parStack(10);

//     for (int i = 0; i < len; i++)
//     {
//         if (str.at(i) == '{' || str.at(i) == '[' || str.at(i) == '(')
//         {
//             parStack.push(str.at(i));
//             char par;
//             parStack.peek(par);
//             for (int j = i + 1; j < len; j++)
//             {
//                 if (str.at(j) == '}' && par == '{')
//                 {
//                     parStack.pop(par);
//                 }
//             }
//         }
//     }

//     return 0;
// }