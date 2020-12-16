#include <iostream>

using namespace std;

struct node
{ int data;
  node *next;};

class single_linked_list
{
node *head, *tail;

public:
single_linked_list()
    {  head=NULL;
       tail=NULL;
    }

void add_node(int n)
    {node *temp= new node;
    temp->data=n;
    temp->next=NULL;

    if(head==NULL)
    {head=temp;
    tail=temp;}
    else
    {tail->next=temp;
    tail=temp;
    }

    }

void display_list()
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {cout<<temp->data<<'\t';
    temp=temp->next;
    }
}
};

int main()
{   single_linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.display_list();


    return 0;
}
