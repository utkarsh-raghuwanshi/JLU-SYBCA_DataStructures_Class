#include<iostream>
using namespace std ;

struct node{
    int data;
    node* next;
};
    node* createnode(int value)
    {
        node* newnode = newnode;
        newnode->data = value;
        newnode->next = nullptr;
        return newnode;
    }
    int main(){
        node* head = createnode(10);
        node* second = createnode(20);
        head->next = second;
        node* third = createnode(30);
        second->next = third;

        node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        return 0;
    }
