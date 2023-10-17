/**
 * The program checks if two strings have the same sequence of unique vowels.
 * 
 * @param c The parameter `c` is a character that is being checked for being a vowel.
 * 
 * @return The function `haveSameUniqueVowelSequence` returns a boolean value. It returns `true` if the
 * two strings have the same sequence of unique vowels, and `false` otherwise.
 */


#include <iostream>
#include <string>

using namespace std;
// Function to check if a character is a vowel
bool isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to check if two strings have the same sequence of unique vowels
bool haveSameUniqueVowelSequence(const string &str1, const string &str2)
{
    string uniqueVowels1;
    string uniqueVowels2;

    // Extract unique vowels from the first string
    for (char c : str1)
    {
        if (isVowel(c) && uniqueVowels1.find(tolower(c)) == string::npos)
        {
            uniqueVowels1 += tolower(c);
        }
    }

    // Extract unique vowels from the second string
    for (char c : str2)
    {
        if (isVowel(c) && uniqueVowels2.find(tolower(c)) == string::npos)
        {
            uniqueVowels2 += tolower(c);
        }
    }

    return uniqueVowels1 == uniqueVowels2;
}

int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    bool result = haveSameUniqueVowelSequence(str1, str2);

    if (result)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}
