// Question 5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> m ;
    cout<<"If Empty function return 1 then multiset is empty " <<m.empty();
    m.insert(1);
    m.insert(6);
    m.insert(4);
    cout<<"\nIf Empty function return 0 then multiset is not empty "<<m.empty();
}