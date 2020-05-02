#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};
Node* head;  //pointer to head-node

/*TODO
    AIM: insert node at nth position
    1) break link between (n-1)th node and nth node
        1) traverse the list till you reach (n-1)th node
        2) set new entry's link as the (n-1)th node's link
        3) set (n-1)th node's link to new entry
    2) Special cases
        a) nth node is the 1st node
            1) set new entry to head
            2) set head to new entry
        b) nth node is the last node
            1) set new entry's link to NULL
            2) set ex-last node's link to new entry
*/

void at_head(int x){
    /*Inserts node at the start of the list
    Note that every new value added to the list preceeds the
    previous one, rather than succeeding it in the list*/
    Node* temp = new Node();
    temp->data = x;
    temp->link = head;
    head = temp;
}

void print(void){
    /*Prints the entire list*/
    Node* temp = head;
    int i = 1;
    cout<<"\n...printing the list...\n";
    while (temp != NULL){
        cout<<"Data at Node_"<<i<<": "<<temp->data<<'\n';
        temp = temp->link;
        i++;
    }
}

Node* traverse(int n){
    /* Traverse the list to the nth node (doesn't work for n=1) */
    Node* temp = head;
    int i = 1;
    while (i<=n){
        //cout<<"...Currently at Node_"<<i<<'\n';
        temp = temp->link;
        i++;
    }
    return temp;
}

void insert(int n, int x)
{
    /*Inserts a node at the nth position*/
    cout<<"...insertion call...\n";
    Node* temp = new Node();

    if (n==1){
        temp->data = x;
        temp->link = head;
        head = temp;
        return;
    }
    temp->data = x;
    temp->link = traverse(n-2)->link;
    traverse(n-2)->link = temp;
}

int main(){
    head = NULL;

//Making the initial list
    int nodes, value;
    cout<<"How many nodes do you want in the list? ";
    cin>>nodes;
    for(int i=1; i<=nodes; i++){
        cout<<"Enter value for node_"<<i<<" "; cin>>value;
        at_head(value);
    }
    print();

//Insertion at nth position
    int node, data;
    cout<<"\nEnter node->position and node->data\n";
    cout<<"Node...\t"; cin>>node;
    cout<<"Data...\t"; cin>>data;
    insert(node, data);

    print();

    return 0;
}