#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

class single_linked_list
{node *head, *tail;
public:
single_linked_list()
    {head=NULL;
    tail=NULL;
    }

void add_node_back(int n)
    {node *temp=new node;
    temp->next=NULL;
    temp->data=n;
    if(tail==NULL)
    {head=temp;
    tail=temp;}
    else
    {tail->next=temp;
    tail=temp;}
    }


void add_node_front(int n)
{node *temp=new node;
temp->data=n;
temp->next=head;
head=temp;}

void add_node_after_node(node *current,int n)
{node *temp=new node;
temp->data=n;
temp->next=current->next;
current->next=temp;
}

void delete_node(node *prev)
{
if(prev->next==tail)
{node *temp=prev->next;
prev->next=NULL;
tail= prev;
delete temp;
}
else
{
node *temp=prev->next;
prev->next=temp->next;
delete temp;}

}

node* get_pointer_to_node_at_pos(int pos)
{
node *temp=head;
for(int i=1;i<pos;i++)
temp=temp->next;
return temp;}

static void display(node *head)
{node *temp=head;
while(temp!=NULL)
{cout<<temp->data<<'\t';
temp=temp->next;
}
}

node* gethead()
{return head;}

node* gettail()
{return tail;}

};

node* reverse_linked_list(node* head)
{node *current, *prev, *next;
current=head;
prev=NULL;
next=NULL;
while(current!=NULL)
{
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    }
head=prev;
return head;

}

int main()
{
single_linked_list a;
a.add_node_back(3);
a.add_node_front(1);
a.add_node_after_node(a.get_pointer_to_node_at_pos(1),2);
single_linked_list::display(a.gethead());
//cout<<endl<<a.gethead()->data;
//cout<<endl<<a.gettail()->data;
node* revhead=reverse_linked_list(a.gethead());
cout<<endl<<"Reversed linked list is"<<endl;
single_linked_list::display(revhead);
}







