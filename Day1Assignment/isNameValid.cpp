/*1) Write down a method boolean isNameValid(String  name).
A name is valid if following conditions are satisfied:
• It does not contain any vowel more than once.
• If the name contains two ‘S’, then there is not any ‘T’ in between them (both in capital cases).*/

#include <iostream>
using namespace std;

int j = 0, c[2], l, n, m, t = 0;
int isNameValid(string str)
{
    int k = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A' || str[i] == 'a')
        {
            k++;
        }

        else if (str[i] == 'E' || str[i] == 'e')
        {
            k++;
        }

        else if (str[i] == 'I' || str[i] == 'i')
        {
            k++;
        }

        else if (str[i] == 'O' || str[i] == 'o')
        {
            k++;
        }

        else if (str[i] == 'U' || str[i] == 'u')
        {
            k++;
        }
    }
    for (l = 0; l < str.length(); l++)
    {
        if (str[l] == 'S')
        {
            j++;
            int c[2] = {l};
        }
    }
    if (j > 1)
    {
        while (str == "\0")
        {
            if (str[c[n] + 1] == 'T')
            {
                t = 1;
            }
        }
    }

    return k;
}
int main()
{
    string str;
    int h;
    cout << "enter name\n";
    cin >> str;
    int isNameValid(string);
    h = isNameValid(str);
    if (h >= 2 || t == 1)
    {
        cout << "InValid Name";
    }
    else
    {
        cout << "Valid Name";
    }

    return 0;
}
