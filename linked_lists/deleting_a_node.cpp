#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};
Node* head;     //Node to head-pointer

void at_head(int x){
    /*Inserts a node at the start of the list
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

    return 0;
}