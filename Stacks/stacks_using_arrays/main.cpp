#include <iostream>

using namespace std;
#define max 100

class stacks{

int top;
int a[max];

public:

stacks()
{top=-1;}

void push(int n)

    {if(top==max-1)
    cout<<"Stack Overflow!!"<<endl;
    else
    {top+=1;
    a[top]=n;
    }
    }

int pop()
{if (top==-1)
{cout<<"Stack Underfow!!"<<endl;
return 0;}

else
    {int popped;
    popped=a[top];
    top=top-1;
    return popped;
    }

}

int gettop()
{return a[top];}

bool isempty()
{if(top==-1)
return 1;
else return 0;
}

bool isfull()
{if (top==max-1)
return 1;
else return 0;}



void display()
{cout<<"Stack is"<<endl;
for(int i=top;i>=0;i--)
cout<<a[i]<<endl;
}};

int main()
{
    stacks a;
    cout<<"Check empty"<<endl;
    cout<<a.isempty()<<endl;
    a.push(10);
    a.push(20);
    a.push(30);
    a.display();
    cout<<"top is\t"<<a.gettop();
    cout<<"POpping"<<endl;
    cout<<a.pop()<<endl<<a.pop();
    cout<<endl;
    a.display();

    return 0;
}
