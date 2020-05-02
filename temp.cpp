#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* link;
};

//Pointer to head node
Node* pt_to_head;

void insert(int x)
{
    Node* temp;
    temp->data = x;
    temp->link = pt_to_head;
    cout<<"link "<<temp->link;
    pt_to_head = temp;
    cout<<"\nhead "<<pt_to_head;    
}

void print(void)
{
    Node* temp = pt_to_head;
    int i = 1;
    cout<<"__LIST__\n";
    while (temp != NULL)
    {
        cout<<temp->link<<'\n';
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
    // print();
    return 0;
}