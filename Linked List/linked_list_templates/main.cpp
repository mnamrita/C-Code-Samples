#include<iostream>

using namespace std;

template<class T1>
struct node
    {
    T1 data;
    node<T1> *next;
    };
template<class T>
class single_linked_list
    {
    node<T> *head, *tail;
    public:

    single_linked_list()
        {head=NULL;
        tail=NULL;
        }

    void add_node_back(T n)
        {
        node<T> *temp=new node<T>;
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

    void add_node_front(T n)
        {
        node<T> *temp=new node<T>;
        temp->data=n;
        temp->next=head;
        head=temp;
        }

    void add_node_after(node<T> *a, T n)
        {
        node<T> *temp=new node<T>;
        temp->data=n;
        temp->next=a->next;
        a->next=temp;

        }

    node<T>* gethead()
        {
        return head;
        }
    static void display_list(node<T> *head)
        {node<T> *temp=head;
        while(temp!=NULL)
        {cout<<temp->data<<'\t';
        temp=temp->next;
        }
        }

    static void concatenate(node<T> *head1, node<T> *head2)
    {
        if(head1->next==NULL)
        head1->next=head2;
        else
        concatenate(head1->next,head2);
        }

    node<T>* get_pointer_to_node_in_position(int pos)
    {
        node<T> *temp=head;
        if(pos==1)
        return gethead();
        else{
        for(int i=1;i<pos;i++)
        temp=temp->next;
        return temp;}
        }

    void delete_node(node<T> *prev)
    {
    if(prev->next==tail)
    {node<T> *temp=prev->next;
    prev->next=NULL;
    delete temp;
    tail=prev;}
    else
    {node<T> *temp=prev->next;
    prev->next=temp->next;
    delete temp;
    }

    }
    };

int main()
{
single_linked_list<int> a;
a.add_node_back(1);
a.add_node_back(2);
a.add_node_back(3);
//single_linked_list::display_list(a.gethead());
single_linked_list<int> b;
b.add_node_back(4);
b.add_node_back(5);
b.add_node_back(6);
single_linked_list<int>::concatenate(a.gethead(),b.gethead());
cout<<"a is"<<endl;
single_linked_list<int>::display_list(a.gethead());
cout<<"b is "<<endl;
single_linked_list<int>::display_list(b.gethead());

node<int> *after =a.get_pointer_to_node_in_position(5);
a.add_node_after(after,7);
cout<<endl<<"Now a is"<<endl;
single_linked_list<int>::display_list(a.gethead());
after =a.get_pointer_to_node_in_position(5);
a.delete_node(after);
cout<<endl<<"now a is"<<endl;
single_linked_list<int>::display_list(a.gethead());



return 0;
}
