#include <iostream>
#include <list>
#include <math.h>
using namespace std;


int my_function(list<int> &listis)
{
    long sum =0;
    for(i: listis)
    {
        sum +=i*i;
    }

    return sqrt(sum)/2;
}

int main()
{
    list<int> my_list ={65, 60, 75, 55, 60, 63, 64, 45};

    cout << my_function(my_list)<<endl;


    return 0;



}
