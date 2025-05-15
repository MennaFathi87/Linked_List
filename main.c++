#include<bits/stdc++.h>

using namespace std;
//انشاء عقده عشان نخزن عنوان و بيانات
struct Node
{
    int data;
    Node* next;
    //عملنا constructor عشان نحط قميه للبيانات و لازم اللي وراه بيشاور علي قيمه غير معرفه
    Node(int value)
    {
        data=value;
        next=nullptr;
    }
};
//هنضيف من اول القائمه
void InsertBegin(Node*& head,int value)
{
Node* newwnode=new Node(value);
newwnode->next=head;
head=newwnode;

}
//هنضيف من نهايه القائمه
void InsertEnd(Node*& head,int value)
{
Node* newwnode=new Node(value);
if(head==nullptr)
{
    head=newwnode;
    return;
}
Node* tmp=head;
while(tmp->next!=nullptr)
{
    tmp=tmp->next;
}
    tmp->next=newwnode;
}
//هنضيف من اي مكان ياشر عليه في القائمه
void insertAtPosition(Node*& head, int pos, int value) {
    Node* newNode = new Node(value);

    if (pos == 0) {
        InsertBegin(head, value);
        return;
    }

    Node* current = head;
    int index = 0;

    while (current != nullptr && index < pos - 1) {
        current = current->next;
        index++;
    }

    if(current==nullptr) {
        cout << "Position is not valid!" << endl;
        delete newNode;
        return;
    }
newNode->next = current->next;
current->next = newNode;
}
 //عشان اطبع عناصر بتاعتي
 void Print(Node*& head)
 {
  Node* tmp=head;
  while(tmp!=nullptr)
  {
    cout<<tmp->data<<" ";
    tmp=tmp->next;
  }
 }
int main()
{
 Node* head=nullptr;
 InsertBegin(head,10);
 InsertBegin(head,50);
 InsertEnd(head,100);
 InsertEnd(head,800);
 insertAtPosition(head,2,7);
 Print(head);

}

