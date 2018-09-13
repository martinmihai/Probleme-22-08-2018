#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> arr = {1,2,3,4,1,2,1,1,1,2,3,1};
    int occurrence = 2;



    cout << arr.size()<<endl;

    for(auto i: arr)
        cout << i<< " ";

    cout << endl;


    for(list<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        int aparitii =0;
        int nr = *it;
        cout << nr << endl;

        for(list<int>::iterator it1 = it; it1 != arr.end(); ++it1)
        {

            cout << *it1 << " ";

            if(*it1 == nr)
                aparitii+=1;
            if((aparitii > occurrence) && (*it1 == nr))
                {
                    it1=arr.erase(it1);
                    --it1;
                }
        cout << endl;
        }
    }
    cout<<endl;
    for(auto i: arr)
        cout << i<< " ";
    return 0;
}
