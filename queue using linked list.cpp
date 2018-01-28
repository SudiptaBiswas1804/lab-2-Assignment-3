//Programme for implementation of queue using linked list method and performing push and pop function
#include <iostream>
using namespace std;

//Constuction of the node structure
struct node{
int data;
node *next;
node *prev;
}; 

//Queue Class
class queue{
private:
node *head, *tail;
public:
queue(){
head==NULL;
tail==NULL;
}

//Push function - function used for adding node at on end
void addnode(int n){
node *temp=new node;
temp->data=n;
temp->next=NULL;
if(head!=NULL){
tail->next=temp;
}
else {
head=temp;
}
tail=temp;
}

//Display function - function used for displaying all the elements of the queue
void displaynode(){
node *temp;
temp=head;
cout<<"The elements of the queue are"<<endl;
while(temp!=NULL){
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}

//Pop function - function used for deleting a node from other end
void deletenode(){
node *temp;
temp=head;
if(head==NULL){
cout<<"The queue is empty"<<endl;
}
else{
head=head->next;
delete temp;
}
}
};

//Main function
int main(){
int n;
queue q;
q.addnode(1);
q.addnode(2);
q.addnode(3);
q.addnode(4);
q.addnode(5);
q.displaynode();
q.deletenode();
cout<<"The queue after popping a node from one end"<<endl;
q.displaynode();
return 0;
}
