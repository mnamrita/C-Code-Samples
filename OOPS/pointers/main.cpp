#include <iostream>

using namespace std;

int main()
{
    int *a;
    a=new int(5);
    int value;

    *a=2;
    cout<<*a;
    *(a+1)=3;
    cout<<*(a+1);
    return 0;
}
