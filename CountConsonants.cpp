//============================================================================
// Name        : Test.cpp
// Author      : 1825794
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

static bool isConsonant(char c)
{
    // If it's a vowel, then it will be a, e, i, o, or u. So if it is a vowel,
    // then it is NOT a consonant, so we invert our result with ! to get
    // the result of whether or not it is a consonant.
    return (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == '\n'));
}

int main()
{
    char c = 'a';
    int consonants = 0;

    while ((c = cin.get()) && c != 'q')
    {
        if (isConsonant(c))
        {
            consonants++;
        }
    }

    cout << "Consonant Count: " << consonants << endl;

    return 0;
}
