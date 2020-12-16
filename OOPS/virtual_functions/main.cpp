#include <iostream>

using namespace std;

class triangle
{
public:

virtual void display()
{cout<<"I am a triangle";
}
};

class right_triangle:public triangle
{
public:

void display()
{
cout<<"I am a right triangle\n";}
};

int main()
{
    triangle *a;
    right_triangle b;
    a=&b;
    a->display();
    return 0;
}
