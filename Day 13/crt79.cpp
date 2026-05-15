//Linked list
#include<iostream
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    Node (int data){
        this->Data = data;
        this->Next = NULL;
    }

}

void printNodes(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->Data << " ";
        temp = temp->Next;
    }
    cout << endl;
}

Node  

int main(){
    
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    head->Next = second;
    second->Next = third;
    third->Next = fourth;
    fourth->Next = fifth;

    printNodes(head);

    return 0;
}
