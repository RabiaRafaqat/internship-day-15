#include <iostream>
#include <vector>
#include <string>
using namespace std;

void replaceSubstrings(string &text, const vector<pair<string, string>> &replacements) {
    
    for (const auto &pair : replacements) {
        string search = pair.first;  
        string replace = pair.second; 

        size_t pos = 0; 
        
        while ((pos = text.find(search, pos)) != string::npos) {
            text.replace(pos, search.length(), replace); 
            pos += replace.length(); 
        }
    }
}

int main() {
    string text = "The quick brown fox jumps over the lazy dog. The fox is clever.";

    vector<pair<string, string>> replacements = {
        {"fox", "cat"},
        {"dog", "pet"},
        {"quick", "fast"}
    };

    cout << "Original text: " << text << endl;

    replaceSubstrings(text, replacements);
    
    cout << "Modified text: " << text << endl;

    return 0;
}