#include<iostream>
#include<list>
using namespace std;

bool HaveTheSameLetters(string word1, string word2) {
    list<char> letters; // this stores the current the same letters
    for (int i = 0; i < word1.size(); i++)
    {
        for (int j = 0; j < word2.size(); j++)
        {
            if (word1[i] == word2[j])
            {
                // it hab the letter
                letters.push_back(word1[j]);
                continue;
            }
        }
    }

    cout << letters.size() << endl;
    if (letters.size() == word1.size())
    {
        return true;
    }

    return false;
}

int main()
{
    string word1 = "";
    string word2 = "";
    string _continue; // Y and N
    bool doContinue = true;

    while (doContinue) {
        cout << "Give the first word: ";
        cin >> word1;
        cout << "Give the second word: ";
        cin >> word2;

        cout << "\nYour words are: \n" << word1 << "\n" << word2 << "\n" << endl;

        if (word1.size() != word2.size())
        {
            cout << "Words length are not the same" << endl;
        }
        else {
            bool doesIt = HaveTheSameLetters(word1, word2);

            if (doesIt == 0) {
                cout << "They are not anagram" << endl;
            }
            else {
                cout << "They are anagram" << endl;
            }
        }

        cout << "Do you want to try again? [y] or [n]: ";
        cin >> _continue;

        if (_continue == "y" || _continue == "Y")
        {
            doContinue = true;
        }
        else if (_continue == "n" || _continue == "N") {
            doContinue = false;
        }
        else {
            cout << "Invalid input, the program will terminate" << endl;
            doContinue = false;
        }
    }
}
