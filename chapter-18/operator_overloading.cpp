/*
 * Author  : Saud Zahir
 * Date    : November 24, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Using the Overloaded Operators of Standard Library Class string
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1("Hello, world");
    string s2("C++ How to Program");
    string s3("Java How to Program");

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << (s1 == s2 ? "true" : "false") << endl;
    cout << (s2 != s3 ? "true" : "false") << endl;
    cout << (s2 > s1 ? "true" : "false") << endl;
    cout << (s3 > s2 ? "true" : "false") << endl;
    cout << s2.substr(4, 14) << endl;
    cout << s3.substr(5, 14) << endl;
    cout << (s2.substr(4, 14) == s3.substr(5, 14) ? "true" : "false") << endl;

    if (not s1.empty()) {
        s1 = s3;
    }

    cout << s1 << endl;
    s1 += " & " + s2;
    cout << s1 << endl;
    cout << s1[20] << endl;

    try {
        s2.at(32) = '-';
    }
    catch (exception &exc) {
        cout << exc.what() << endl;
    }
}
