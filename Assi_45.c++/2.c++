// Question 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> m;
    m.insert(45);
    m.insert(4);
    m.insert(6);
    m.insert(9);
    multiset<int>::iterator it;
    it = m.begin();
    it++; it++; 
    cout<<"Last Element is "<<*it;
}