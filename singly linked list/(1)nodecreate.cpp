//basic node creation code 
#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};

//global pointers declare 
  node*first,*temp,*ttemp;

 // init function: initialize all pointers to NUL
 void init()
 {  
    first =temp = ttemp =nullptr ;
 }
 //creation of node
  
  void createfirst(){
    first=new node; //dynamic memory allocate
    first->next=nullptr; //next pointer null kia
    cin>>first->data; //data input
  }
  int main() {
    init();
    createfirst();

    cout << "First node data: " << first->data << endl;
    return 0;
}