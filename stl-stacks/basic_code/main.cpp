#include <iostream>
#include<stack>
using namespace std;

void display_stack(stack<int> &s)
{

stack<int>a=s;
cout<<"THe stack is\n";
while(!a.empty())
{
cout<<a.top()<<endl;
a.pop();
}
}

int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.emplace(40);
    display_stack(s);
    return 0;
}
