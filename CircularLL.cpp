#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next = NULL;

    //Parametrized Constructor 
    Node(int data){

        //this keyword is used to distinguish between data members and parameters of constructor.
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int data){

    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
    
}

void InsertAtTail( Node* &tail, int data){

    Node* temp = new Node(data);

    tail -> next = temp;
    tail = tail->next;
    
}

void PrintNode(Node* &head){

    Node* temp = head;

    while (temp != NULL){
        cout<< temp -> data <<" "<<endl;
        temp = temp -> next;
    }

    cout<<endl;
    
}
 
int main(){

    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail, 2);

    InsertAtTail(tail, 3);

    InsertAtTail(tail, 4);

    PrintNode(head);

 return 0;
}