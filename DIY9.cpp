//DIY9
//REVERSE WORD ORDER

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string sentence;
    vector<string> words;
    string word;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    while (ss >> word)
    {
        words.push_back(word);
    }

    for (int i = words.size() - 1; i >= 0; i--)
    {
        cout << words[i] << " ";
    }

    return 0;
}