#include <iostream>
#include <string>
#include <cctype> 
using namespace std;


bool isPalindrome(const string &str) {
    int start = 0;
    int end = str.size() - 1;

    while (start < end) {
        while (start < end && !isalnum(str[start])) {
            ++start;
        }
        while (start < end && !isalnum(str[end])) {
            --end;
        }

        if (tolower(str[start]) != tolower(str[end])) {
            return false; 
        }

        ++start;
        --end;
    }

    return true; 
}

int main() {
    string test1 = "Able was I ere I saw Elba";
    string test2 = "OpenAI is awesome";

    cout << "\"" << test1 << "\" is ";
    cout << (isPalindrome(test1) ? "a palindrome." : "not a palindrome.") << endl;

    cout << "\"" << test2 << "\" is ";
    cout << (isPalindrome(test2) ? "a palindrome." : "not a palindrome.") << endl;

    return 0;
}