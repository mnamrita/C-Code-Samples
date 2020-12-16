#include <iostream>

using namespace std;

class Box
{
int side;

public:

void set_side(int s)
{side=s;}
friend void display_volume(Box b);
};

void display_volume(Box b)
{
cout<<"Volume is :"<<b.side*b.side*b.side;}

int main()
{
    Box b1;
    b1.set_side(10);
    display_volume(b1);
    return 0;
}
