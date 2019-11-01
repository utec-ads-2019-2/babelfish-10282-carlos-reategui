#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    map<string, string> dictionary;
    string word, foreignWord, wordToTranslate, line;
    while (getline(cin, line) and !line.empty()) {
        stringstream ist(line);
        ist >> word >> foreignWord;
        dictionary[foreignWord] = word;
    }

    while (cin >> wordToTranslate) {
        cout << (dictionary.find(wordToTranslate) == dictionary.end() ? "eh" : dictionary[wordToTranslate]);
        putchar('\n');
    }
    return EXIT_SUCCESS;
}