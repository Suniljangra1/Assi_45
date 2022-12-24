// Question 4
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(5);
    s.insert(7);
    s.insert(8);
    s.insert(3);
    cout<<"Max_Size is "<<s.max_size();
}