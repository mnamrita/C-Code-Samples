#include<iostream>

using namespace std;


struct node
    {
    int data;
    node *next;
    };

class single_linked_list
    {
    node *head, *tail;
    public:

    single_linked_list()
        {head=NULL;
        tail=NULL;
        }

    void add_node_back(int n)
        {
        node *temp=new node;
        temp->data=n;
        temp->next=NULL;

        if(head==NULL)
        {head=temp;
        tail=temp;
        }

        else
        {tail->next=temp;
        tail=temp;
        }

        }

    void add_node_front(int n)
        {
        node *temp=new node;
        temp->data=n;
        temp->next=head;
        head=temp;
        }

    void add_node_after(node *a, int n)
        {
        node *temp=new node;
        temp->data=n;
        temp->next=a->next;
        a->next=temp;

        }

    node* gethead()
        {
        return head;
        }
    static void display_list(node *head)
        {node *temp=head;
        while(temp!=NULL)
        {cout<<temp->data<<'\t';
        temp=temp->next;
        }
        }

    static void concatenate(node *head1, node *head2)
    {
        if(head1->next==NULL)
        head1->next=head2;
        else
        concatenate(head1->next,head2);
        }

    node* get_pointer_to_node_in_position(int pos)
    {
        node *temp=head;
        if(pos==1)
        return gethead();
        else{
        for(int i=1;i<pos;i++)
        temp=temp->next;
        return temp;}
        }

    void delete_node(node *prev)
    {
    if(prev->next==tail)
    {node *temp=prev->next;
    prev->next=NULL;
    delete temp;
    tail=prev;}
    else
    {node *temp=prev->next;
    prev->next=temp->next;
    delete temp;
    }

    }
    };

int find_loop(node *head)
{
node *slow, *fast;
slow=head;
fast=head;
while(slow&&fast&&fast->next)
{slow=slow->next;
fast=fast->next->next;
if(slow==fast)
    {cout<<"Found Loop\n";
    return 1;}
}
return 0;
}
int main()
{
//creating loop in linked list
single_linked_list a;
a.add_node_back(1);
a.add_node_back(2);
a.add_node_back(3);
a.add_node_back(4);
a.add_node_back(5);
node *last=a.get_pointer_to_node_in_position(5);
node *pos=a.get_pointer_to_node_in_position(2);
last->next=pos;
//created- loop
int value=find_loop(a.gethead());
if(value==0)
cout<<"No loop";




return 0;
}
