#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s1;
    cout << "input string: " << endl;
    cin >> s1;
    cout << "yoour string: " << s1 << endl;

    if (s1.empty)
    {
        cout << "string is empty" << endl;
        return 0;
    }

    return 0;
}