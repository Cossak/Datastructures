#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* link;
};

int main()
{
//Nodes
    //Node 1
        Node* n1 = new Node();
        n1->data = 10;
    //Node 2
        Node* n2 = new Node();
        n2->data = 20;
    //Node 3
        Node* n3 = new Node();
        n3->data = 30;

//Links
    Node* pt_to_head = n1;    
    n1->link = n2;
    n2->link = n3;
    n3->link = NULL;

//Traversing the list & printing each node's data
    Node* temp = pt_to_head;
    int i = 1;
    while (temp != NULL)
    {
        cout<<"Data Node_"<<i<<": "<<temp->data<<'\n';
        temp = temp->link;
        i++;
    }

    return 0;
}
