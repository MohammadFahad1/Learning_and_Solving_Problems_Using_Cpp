#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string a = "Hello";
    // string b = "World";
    /*
    // Concating String
        a = a + b;
        a += b;
        a.append(b);
        cout << a << endl
             << b << endl;
    */
    /*
        // Adding a single character after the string
        // a = "HelloA";
        // a += "A";
        a.push_back('A');
        cout << a << endl;
        a.pop_back();
        cout << a << endl;
     */

    /*
    // Other Available Methods:
        s= -> assign string.
        s.assign() -> assign string.
        s.erase() -> erase characters from the string.
        s.replace() -> replace a portion of the string.
        s.insert() -> insert a portion to a specific position.
     */

    // a = "Gelo";
    // a.assign("Gelo");
    // cout << a << endl;

    string s = "Hello World";
    // s.erase(5, s.size() - 6);
    // s.erase(5, 3);
    // cout << s << endl;
    /*
        // Replacing blank space with Underscore
        s.replace(5, 1, "_");
        s.replace(5, 0, "oo");
        cout << s << endl;
     */

    // s.replace(5, 0, " Fahad");
    s.insert(5, " Fahad");
    cout << s << endl;

    return 0;
}