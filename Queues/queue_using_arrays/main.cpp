#include <iostream>

#define max 10


using namespace std;

class queue
{int a[max];
int front;
int rear;
int size;

public:
queue()
{size=front=rear=-1;
}

void enqueue(int n)
    {if(size==max)
    cout<<endl<<"Queue is full"<<endl;
    else if(size<0)
        {
        front=rear=0;
        a[rear]=n;
        size=1;}

    else if(rear==max-1)
    {rear=0;
    a[rear]=n;
    size+=1;
    }
    else
    {rear=rear+1;
    a[rear]=n;
    size+=1;
        }
    }

void dequeue()
{if(size<0)
cout<<endl<<"Queue is empty"<<endl;
else if(front==max-1)
{
front=0;
size-=1;}

else
{front= front+1;
size-=1;
}
}

void display()
{cout<<"Queue is \n";
if(rear>=front)
{for(int i=front;i<=rear;i++)
cout<<a[i]<<endl;
}
else
{
for(int i=front;i<max;i++)
cout<<a[i]<<endl;
for(int i=0;i<=rear;i++)
cout<<a[i]<<endl;
}
}
};

int main()
{
    queue a;
    a.enqueue(1);
    a.enqueue(2);
    a.enqueue(3);
    a.enqueue(4);
    a.enqueue(5);
    a.display();
    a.dequeue();
    a.display();
    a.enqueue(6);
    a.display();
    return 0;
}
