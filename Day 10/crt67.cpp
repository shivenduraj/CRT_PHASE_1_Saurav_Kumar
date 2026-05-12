//string
#include <iostream>
#include <string>
using namespace std;
int main () {

    string str1 = "Hello";
    string str2 = "World";
    cout << str1 << " " << str2 << endl;

    //Methods of string
    
    //length of string

    int a = str1.length();
    cout << "Length of str1 is: " << a << endl;

    //Append string

    cout << "After appending string is: " << str1.append("Students") << endl;

    //empty string

    cout << "Is str1 empty? " << str1.empty() << endl;

    //Concatination of string
    cout << "After concatination of string is: " << str1 + "Bacho" << endl;
    cout << "After concatination of string is: " << str1 << endl;

    //push_back() method
    str2.push_back('s');
    cout << "After push_back() method: " << str2 << endl;

    //pop_back() method
    str2.pop_back();
    cout << "After pop_back() method: " << str2 << endl;

    //find() method
    int index = str1.find("Students");
    cout << "Index of 'Students' in str1 is: " << index << endl;

    // at method. str1[1];
    char ch = str1.at(1);
    cout << "Character at index 1 in str1:" << ch << endl;

    //swap() method
    str1.swap(str2);
    cout << "After swapping str1 and str2: " << str1 << " " << str2 << endl;
    cout << "str1 is: " << str1 << endl;
    cout << "str2 is: " << str2 << endl;

    //substr() method
    string substr = str1.substr(0, 5);  //0 is index and 5 is total length of string
    cout << "Substring of str1 is: " << substr << endl;

    //getline() method
    string str3;
    //cin >> str3;
    getline(cin, str3);
    cout << "You entered: " << str3 << endl;

    return 0;
}