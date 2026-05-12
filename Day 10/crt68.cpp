//reverse words in a string
#include <iostream> 
#include <string>
using namespace std;
void reverseWords(string &s) {
    int n = s.length();
    // Remove trailing space
    while (n > 0 && s[n - 1] == ' ') {
        n--;
    }
    s = s.substr(0, n);
}