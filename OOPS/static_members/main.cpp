#include <iostream>


using namespace std;

class Box
{
int s;

public:
static int number_of_boxes;
Box(int side)
{s=side;
number_of_boxes++;
}
static int getcount()
{return number_of_boxes;}
};

int Box::number_of_boxes=0;

int main()
{

    Box a(10);
    Box b(10);
    int value=Box::getcount();
    cout<<value;

    return 0;
}
