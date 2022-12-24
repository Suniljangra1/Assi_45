// Question 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> m;
    m.insert(5);
    m.insert(8);
    m.insert(3);
    multiset<int>::iterator it;
    it=m.end()--;
    // it++; 
    cout<<"Element is "<<*it;
}