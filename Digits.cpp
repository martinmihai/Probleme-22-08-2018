#include <iostream>

using namespace std;

int main()
{
    string numbers;

    cin >> numbers;

    cout << numbers << endl;

    for(i : numbers)
    {
        if( i < '5')
        {
             size_t poss = numbers.find(i);
             numbers.replace(poss, 1, "0");
        }
        else if( i > '5')
        {
            size_t poss = numbers.find(i);
            numbers.replace(poss, 1, "1");
        }
    }
    cout<<numbers ;


    return 0;
}
