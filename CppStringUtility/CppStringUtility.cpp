#include <iostream>
#include "clsString.h"
#include <vector>

int main()
{
    using namespace std;

    clsString s("hello my name is rida. I am a programmer!");

    cout << "Original String: " << s.GetValue() << "\n\n";

    // Length and Word Count
    cout << "Length: " << s.Length() << endl;
    cout << "Word Count: " << s.CountWords() << endl;

    // Case Operations
    s.UpperFirstLetterOfEachWord();
    cout << "UpperFirstLetterOfEachWord: " << s.GetValue() << endl;

    s.LowerFirstLetterOfEachWord();
    cout << "LowerFirstLetterOfEachWord: " << s.GetValue() << endl;

    s.UpperAllString();
    cout << "UpperAllString: " << s.GetValue() << endl;

    s.LowerAllString();
    cout << "LowerAllString: " << s.GetValue() << endl;

    s.InvertAllLettersCase();
    cout << "InvertAllLettersCase: " << s.GetValue() << endl;

    // Count letters
    cout << "Capital Letters: " << s.CountCapitalLetters() << endl;
    cout << "Small Letters: " << s.CountSmallLetters() << endl;
    cout << "Count 'a': " << s.CountSpecificLetter('a', false) << endl;
    cout << "Vowels: " << s.CountVowels() << endl;

    // Split & Join
    vector<string> words = s.Split(" ");
    cout << "Split by space: ";
    for (auto& w : words) cout << "[" << w << "] ";
    cout << endl;

    string joined = clsString::JoinString(words, "-");
    cout << "Join with '-': " << joined << endl;

    // Trim
    clsString s2("   hello world   ");
    s2.Trim();
    cout << "Trim: '" << s2.GetValue() << "'" << endl;

    // Reverse words
    clsString s3("reverse these words");
    s3.ReverseWordsInString();
    cout << "ReverseWordsInString: " << s3.GetValue() << endl;

    // Replace word
    s.ReplaceWord("programmer", "developer");
    cout << "ReplaceWord: " << s.GetValue() << endl;

    // Remove punctuation
    s.RemovePunctuations();
    cout << "RemovePunctuations: " << s.GetValue() << endl;

    return 0;
}
