#include <iostream>
#include "clsString.h" // only if you put clsString in separate header

int main() {
    clsString s("hello world");
    s.UpperFirstLetterOfEachWord();
    std::cout << s.GetValue() << std::endl; // "Hello World"
    return 0;
}
