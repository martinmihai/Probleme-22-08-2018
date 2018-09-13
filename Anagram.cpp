#include <iostream>

using namespace std;

bool my_function(string first, string second)
{
    for(i: first)
    {
        if(second.find(i) == -1)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    string first_word;
    string second_word;

    cin >> first_word;
    cin >> second_word;

    cout << first_word << " " << second_word << endl;


    if( my_function(first_word, second_word))
    {
        cout << first_word << " is an anagram of " << second_word<<endl;
    }
    else
    {
        cout << first_word << " is NOT an anagram of " << second_word<<endl;
    }

    return 0;
}
