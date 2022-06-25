#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

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

    struct Node* current2 = (struct Node*)malloc(sizeof(struct Node));
    current2 -> data = 3;
    current2 -> link = NULL;

    current -> link = current2;

    return 0;
}
