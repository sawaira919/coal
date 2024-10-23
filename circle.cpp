#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    node* head = NULL;
    node* n1 = new node;
    node* n2 = new node;
    node* n3 = new node;

    n1->data = 1;
    n2->data = 2;
    n3->data = 3;

    n1->next = n2;
    n2->next = n3;
    n3->next = n1;  // Circular link
    head = n1;

    node* temp = head;
    
    // First print loop
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);  // Fixed condition
    cout << endl;
    
    cout<<"insertion at start";
    node*n4=new node;
    n4->data=4;
    n4->next=head;
    head=n4;  
    n3->next=n4;
    node*ttemp;
    ttemp=head;
    do {
        cout << ttemp->data << " ";
        ttemp = ttemp->next;
    } while (ttemp != head);  // Fixed condition
    cout << endl;
    
    cout<<"insertion at end";
    node*n5=new node;
    n5->data=5;
    n5->next=n4;
    n3->next=n5;
    node*tttemp;
    tttemp=head;
    do {
        cout << tttemp->data << " ";
        tttemp = tttemp->next;
    } while (tttemp != head);  // Fixed condition
    cout << endl;
    int p;
    cout<<"enter at posiyion";
    cin>>p;
    
    node*cur=head;
   
    while(cur->data!=p)
    {
    	
    	cur=cur->next;
	}
	node*pre=new node;
	pre->data=7;
	pre->next=cur->next;
	cur->next=pre;
	
	 node*ttt;
    ttt=head;
    do {
        cout << ttt->data << " ";
        ttt = ttt->next;
    } while (ttt != head);  // Fixed condition
    cout << endl;
	
	
      return 0;
}
