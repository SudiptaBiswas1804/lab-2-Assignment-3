#include <iostream>
using namespace std;

class stack{
private:
int stk[500],top;
public:
stk(){
top=-1;
}

void add(int n){
if(top>500){
cout<<"The stack is full"<<endl;
}
else{
stk[++top]=n;
}
}

void delete(){
if(top<0){
cout<<"The stack is empty"<<endl;
}
else {
stk[top--];
}
}

void display(){
if(top<0){
cout<<"The stack is empty"<<endl;
}
else{
for(int i=top; i>=0; i--){
cout<<stk[i]<<"->";
}
}
}
};

int main(){
int n;
stack s;
s.add(1);
s.add(2);
s.display();
s.delete();
s.display();
return 0;
}
