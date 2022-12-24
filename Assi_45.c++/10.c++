// question 10 
#include<iostream>
#include<set>
using namespace std;
int main()
{
    int coutt=0,temp=0;
    multiset<int> m,s;
    m.insert(5);
    m.insert(10);
    m.insert(4);
    m.insert(3);
    s.insert(5);
    s.insert(10);
    s.insert(4);
    s.insert(3);
    for(auto i=0; i<s.size();i++)
    {
        if(s==m)
        coutt++;
        else 
        temp++;
    }
    if(coutt>0)
    cout<<"Multiset is equle ";
    else 
    cout<<"Multiset is not equle ";
}