//  Question 8 delete 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(21);
    s.insert(66);
    s.insert(4);
    s.insert(53);
    s.insert(67);
    s.insert(4);
    s.insert(37); 
    s.erase(4);
    multiset<int>::iterator i;
    for(auto i=s.begin(); i!=s.end();i++)
    {
       cout<<*i;
    }
}