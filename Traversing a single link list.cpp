//problem

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};


void count_of_node(struct Node* head,int data)
{
    int count = 0;

    if(head == NULL)
    {
        cout<<"Linklist is empty"<<"\n";
    }

    struct Node* ptr = NULL;
    ptr = head;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> link = NULL;

    while(ptr -> link != NULL)//  (ptr != NULL)
    {
        count++;
        cout<<ptr -> data<<"\n";
        ptr = ptr -> link;
    }
    ptr -> link = temp;
}


int main()
{
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 45;
    head -> link = NULL;

    struct Node* current = (struct Node*)malloc(sizeof(struct Node));
    current -> data = 98;
    current -> link = NULL;

    head -> link = current;

    current = (struct Node*)malloc(sizeof(struct Node));
    current -> data = 3;
    current -> link = NULL;

    head -> link -> link = current;

    add_the_node(head,67);

    return 0;
}
