#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 1000
#define capacity 3
int st[capacity];
int TOP = -1;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

void push(int x)
{
    TOP++;
    if(TOP < capacity)
    {
        st[TOP] = x;
        cout<<"Item added successfully"<<"\n";
    }
    else
    {
        cout<<"Stack is full"<<"\n";
    }
}

int peek()
{
    if(TOP >= 0 && TOP <= capacity -1)
    {
        return st[TOP];
    }
    else
    {
        cout<<"Exception from peek\n";
        return -1;
    }
}

int pop()
{
    if(TOP >= 0)
    {
        int val = st[TOP];
        TOP--;

        return val;
    }

    cout<<"Exception from pop"<<"\n";
    return -1;
}

void solve()
{
    peek();

    push(10);
    push(20);
    push(30);
    push(40);

    peek();
    pop();
}

int main()
{
    fastIO();
    solve();
}
