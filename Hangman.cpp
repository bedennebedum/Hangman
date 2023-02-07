#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string word = "I LOVE PROGRAMMING";
    string mask = "- ---- -----------";
    string letters;
    char letter;
    
    cout << "Welcome to Hangman!";

    while (word != mask)
    {
        cout << "\n\n";

        for (int i = 0; i < mask.length(); i++) cout << mask[i];

        cout << "\n\n\t" << letters << "\n\n";
        cout << "Guess a letter: \n";
        cin >> letter;
        letter = toupper(letter);


        for (int i = 0; i < word.length(); i++) 
        {
            if (word[i] == letter)
            mask[i] = letter; 
        }
        letters += letter;
    }
    
    cout << "\n\n";
    for (int i = 0; i < word.length(); i++) cout << word[i];
    cout << "\n\n";

    return 0;
}