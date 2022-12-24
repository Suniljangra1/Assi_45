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
    s.insert(6);
    s.erase(s.find(6)); 
    multiset<int> ::iterator u;

   for(auto u=s.begin();u!=s.end();u++)
   {
      cout<<*u<<" "; 
   }
}