//Palindrome string
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
    int n = s.size();
    int start = 0;
    int end = n - 1;
    while (start < end) {
        while (!isalnum(s[start]) && start < end) {
            start++;
        }
        while (!isalnum(s[end]) && start < end) {
            end--;
        }
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
};