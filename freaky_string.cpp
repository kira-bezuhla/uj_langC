#include <iostream>
#include <string>
#include <windows.h>
#include <cctype>

using namespace std;

// for input:
// jack had 2 apples. sara, it seems, wanted at least 1 of them, so she nicely asked for it. jack liked her, so he gave her not 1, but 2 apples. how many does he have left?
// 123 abc 456 78
int main()
{
    string str, rts;
    cout << "hello freak, input smth: " << endl;
    getline(cin, str);
    if (str == "")
    {
        cout << "why would u do that to me, freak??" << endl;
        return 0;
    }

    cout << "=================================" << endl
         << endl;
    cout << "thats your string, freak: " << str << endl;
    for (int i = str.size(); i >= 0; i--)
    {
        rts += str[i];
    }
    cout << "and now i turned it: " << rts << endl;
    cout << "=================================" << endl
         << endl;

    if (str[0] != ' ')
    {
        str[0] = toupper(str[0]);
    }
    for (int i = 0; i <= str.size(); i++)
    {

        if (str[i] == ' ' && str[i + 1] != ' ' && !isupper(str[i + 1]))
        {
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    cout << "look what i can do: " << str << endl;
    cout << "=================================" << endl
         << endl;

    int count = 0;
    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'y' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'Y' || str[i] == 'U')
        {
            count++;
        }
    }
    cout << "let me think..." << endl;
    Sleep(3000);
    cout << "well, it seems u have " << count << " vowels in your input, FREAK!" << endl;
    cout << "=================================" << endl
         << endl;

    int sum = 0;
    int j = 0, cof = 1;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (isdigit(str[i]))
        {
            j = i;
            do
            {
                sum += (static_cast<int>(str[j]) - '0') * cof;
                j--;
                cof *= 10;
            } while (str[j] != ' ' && j >= 0);
            i = j;
            cof = 1;
        }
    }

    cout << "What am I, calculator? You`re freaking me out! Here is sum of all numbers on your input: " << sum << endl;
    return 0;
}
