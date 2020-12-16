#include <iostream>

using namespace std;

struct node
{int data;
node *next;
};

class stack{
node *top;

public:
stack()
{top=NULL;}

void push(int n)
{node *temp=new node;
temp->data=n;
temp->next=top;
top=temp;
}

int pop()
{if(top==NULL)
    {cout<<"Stack underflow!!"<<endl;
    return 0;}

int value=top->data;
top=top->next;
return value;}

bool isempty()
{return (top==NULL);
}

int peek()

{cout<<"Top is ";
return top->data;
}


void display()
{if(top==NULL)
cout<<"EMpty stack"<<endl;
else{
node *temp;
temp=top;
cout<<endl<<"Stack is"<<endl;
while(temp!=NULL)
{cout<<temp->data<<endl;
temp=temp->next;
}
}}
};

int main()
{
    stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.display();
    cout<<a.peek();
    while(!a.isempty())
    {
    int popped;
    popped=a.pop();
    cout<<endl;
    cout<<"POpped value is "<<popped<<endl;
    a.display();
    }

    return 0;
}
