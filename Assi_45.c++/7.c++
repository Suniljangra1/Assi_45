//  Question 7
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(4);
    s.insert(5);
    s.insert(7);
    s.insert(8);
    s.insert(3); 
    multiset<int>::iterator i;
    for(auto i=s.begin(); i!=s.end();i++)
    {
        s.erase(i);
         
    }
}