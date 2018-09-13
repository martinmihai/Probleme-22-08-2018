#include <iostream>
#include <array>
using namespace std;

bool my_fuction(array<int,5>& arr)
{


    for(int i=0; i<arr.size() ; ++i)
    {
        if( arr[i] > arr[i+1])
            return false;
    }
    return true;
}

int main()
{
    array<int,5> my_arr = {1,4,2,7,19};





    if(my_fuction(my_arr))
        cout << "True";
    else
        cout << "False";



    return 0;
}
