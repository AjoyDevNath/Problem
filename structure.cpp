#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 1000

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

void solve()
{
    struct student{
        int id;
        char* name;
    };
    struct student one;

    one.id = 1;
    one.name = "Hasan";
    cout<<one.id<<" "<<one.name;
}

int main()
{
    fastIO();
    solve();
}
