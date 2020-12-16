#include <iostream>
#include<string>
#include<iterator>

using namespace std;

int main()
{   string str;
string str2;
    str="namrita";

    for(auto i=str.rbegin();i!=str.rend();i++)
    {str2.push_back(*i);
    }
    cout<<"Reverese is\t"<<str2;

    return 0;
}
