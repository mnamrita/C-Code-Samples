#include <iostream>

using namespace std;

struct node{
int data;
node *left;
node *right;
};

class binary_tree
{
node *root;

public:

binary_tree()
{root=NULL;}

node* create_root(int n)
{node *temp=new node;
temp->data=n;
temp->left=NULL;
temp->right=NULL;
this->root=temp;
return root;
}

node* add_node(int n)
{
    node *temp=new node;
    temp->data=n;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
    }
};


node* binary_search_tree_algo(node *root, int key)
{
    if(root==NULL)
        {cout<<"TRee is empty or value not found\n";
        return root;
        }
    else
    {   if(root->data==key)
            return root;
        else if(root->data>key)
            {root=root->left;
              return binary_search_tree_algo(root,key);}
        else
            {root=root->right;
            return binary_search_tree_algo(root,key);
            }

        }
}


int main()
{
    binary_tree b;
    node *root= b.create_root(8);
    root->left=b.add_node(3);
    root->right=b.add_node(10);
    root->left->left=b.add_node(1);
    root->left->right=b.add_node(6);
    root->right->right=b.add_node(14);
    root->left->right->left=b.add_node(4);
    root->left->right->right=b.add_node(7);
    root->right->right->left=b.add_node(13);
    //cout<<root->left->left->data;

    node *pointer=binary_search_tree_algo(root,14);
    cout<<"Value pointed by pointer obtained\t"<<pointer->data;



    return 0;
}
