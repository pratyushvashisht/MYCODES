#include<iostream>
using namespace std;

class node{
public:
  int data;
  node *next;
  node(int a){
    data = a;
    next = NULL;
  }
};

void insert(int a,node* &head){
  if(!head){
    head = new node(a);
    return;
  }
  node *temp = new node(a);
  temp->next = head;
  head = temp;
  return;
}

void show(node* &head){
  node *temp = head;
  while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<"\n";
}

void mid(node *&head,node *&a,node *&b){
  node *slow = head;
  a = head;
  node *fast = head;
  while(fast && fast->next){
    slow= slow->next;
    fast = fast->next->next;
  }

  b = slow->next;
  slow->next =NULL;
}



node* merge(node *head1,node *head2){
  //base case
  if(!head1){
    return head2;
  }
  if(!head2){
    return head1;
  }

  //recursive cases
  if(head1->data < head2->data){
    head1->next = merge(head1->next,head2);
    return head1;
  }
  else{
    head2->next = merge(head1,head2->next);
    return head2;
  }
}
node* mergesort(node *&h){
  node *result;
  node *a = NULL;
  node *b = NULL;
  if(!h || !h->next){
    return h;
  }
  mid(h,a,b);
  mergesort(a);
  mergesort(b);
  result = merge(a,b);
  return result;
}

int main(){
  node *head = NULL;
  node *head2 = NULL;
  insert(10,head);
  insert(8,head);
  insert(3,head);
  insert(1,head);
  show(head);
  insert(12,head2);
  insert(9,head2);
  insert(6,head2);
  // insert(2,head2);
  node *h = NULL;
  insert(10,h);
  insert(8,h);
  insert(3,h);
  insert(1,h);
  show(head2);
  node *a = mergesort(h);
  show(a);
  return 0;
  }
