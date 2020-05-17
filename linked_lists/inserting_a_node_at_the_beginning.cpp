#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* link;
};

//Pointer to head-node
Node* pt_to_head;

void insert(int x)
{
    /*Inserts node at the start of the list
    Note that every new value added to the list preceeds the
    previous one, rather than succeeding it in the list*/
    Node* temp = new Node();
    temp->data = x;
    temp->link = pt_to_head;
    // cout<<"link "<<temp->link;
    pt_to_head = temp;
    // cout<<"\nhead "<<pt_to_head;    
}

void print(void)
{
    /*Prints the entire list*/
    Node* temp = pt_to_head;
    int i = 1;
    cout<<"\n__LIST__\n";
    while (temp != NULL)
    {
        cout<<"Data at Node_"<<i<<": "<<temp->data<<'\n';
        temp = temp->link;
        i++;
    }
}

int main()
{
    pt_to_head = NULL;
    int nodes, value;
    cout<<"How many nodes do you want in the list? ";
    cin>>nodes;
    for(int i=1; i<=nodes; i++)
    {
        cout<<"\nEnter value for node_"<<i<<" "; cin>>value;
        insert(value);
        // print();
    }
    print();
    return 0;
}
