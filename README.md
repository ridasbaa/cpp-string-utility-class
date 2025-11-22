# clsString Library

## Description
`clsString` is a C++ string utility library that simplifies string manipulation. It provides functions to change case, count letters, words, vowels, split/join strings, trim spaces, replace words, remove punctuations, and reverse words.

## Features
- Get/set string value
- Count letters, capital letters, small letters, vowels, specific letters
- Count words
- Upper/lower case conversion, invert case
- Upper/lower first letter of each word
- Split and join strings
- Trim spaces (left, right, both)
- Reverse words
- Replace a word
- Remove punctuations

## Usage
Include `clsString.h` and create an object:
```cpp
clsString str("Hello World");
str.UpperAllString();
cout << str.Value;  // outputs: HELLO WORLD
