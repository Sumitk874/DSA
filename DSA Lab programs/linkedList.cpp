#include<iostream>
using namespace std;


/*

    Use of LinkedList
    stacks and queues(dynamic)
    image gallery
    music player
    browser (move back and forth)
    hashmaps and hashsets
      

*/
 
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};


//Inserting at front of a linkedList
void insertAtHead(Node* &head, int d){
    // create a new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


// Inserting at tail of a linkedList
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next; 
}


//Inserting at given position in a linkedList 
void insertAtPosition(Node* &tail,Node* &head,int position, int d){
    
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// traversal
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    // created a new node
    Node* node1 = new Node(10);
    // cout << node1->data <<endl;
    // cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail,45);
    print(head);

    insertAtPosition(tail,head,1,4);
    print(head);

    
    return 0;
}