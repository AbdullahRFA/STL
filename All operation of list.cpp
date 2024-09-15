#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li,li1;
    int n;
    cout<<"Enter the number of inserting value for first list : ";
    cin>>n;
    int t=n;
    while(n--)
    {
        int n;
        cin>>n;
        li.push_back(n);
    }
     int k;
    cout<<"Enter the number of inserting value for Second list : ";
    cin>>k;
    int p=k;
    while(k--)
    {
        int k;
        cin>>k;
        li1.push_back(k);
    }

    cout<<"First List elements are : ";
    for(auto x : li)
    {
        cout<<x<<" ";
    }
    cout<<"\nDo you want to push_front something?\nAns: ";
    char s;
    cin>>s;
    if(s=='y'||s=='Y')
    {
        cout<<"\nEnter the number of inserting value : ";
        int n;
        cin>>n;
        while(n--)
        {
           int n;
           cin>>n;
        li.push_front(n);
        }
    }
    cout<<"\nFirst List elements are : ";
    for(auto x : li)
    {
        cout<<x<<" ";
    }
    cout<<"\nThe front element is : "<<li.front();
    cout<<"\nThe back element is : "<<li.back();


    cout<<"\nDo you want to pop_front something?\nAns: ";
    char q;
    cin>>q;
    if(q=='y'||q=='Y')
    {
        cout<<"\nEnter how many elements do you want to pop : ";
        int n;
        cin>>n;
        while(n--)
        {
        li.pop_front();
        }
    }
     cout<<"First List elements are : ";
    for(auto x : li)
    {
        cout<<x<<" ";
    }
     cout<<"\nDo you want to pop_back something?\nAns: ";
    char l;
    cin>>l;
    if(l=='y'||l=='Y')
    {
        cout<<"\nEnter how many elements do you want to pop : ";
        int n;
        cin>>n;
        while(n--)
        {
        li.pop_back();
        }
    }
     cout<<"First List elements are : ";
    for(auto x : li)
    {
        cout<<x<<" ";
    }
    cout<<"\nSize of the First list : "<<li.size();
    if(li.empty())
    {
        cout<<"\nList is Empty";
    }
    else
    {
        cout<<"\nList is not Empty";
    }



    cout<<"\nDo you wanna insert anything?\nAns: ";
     //cout<<"\nDo you want to pop_front something?\nAns: ";
    char o;
    cin>>o;
    if(o=='y'||o=='Y')
    {
        cout<<"\nEnter the position and value: ";
        int n,k;
        cin>>n>>k;
       auto it=li.begin();
       advance(it,n-1);
       li.insert(it,k);
    }
    cout<<"\nList1 are : ";
    for(auto x : li)
    {
        cout<<x<<" ";
    }
    cout<<"\nList2 are : ";
    for(auto x : li1)
    {
        cout<<x<<" ";
    }
      li.sort();
    li1.sort();
    li.merge(li1);
    cout<<"\nAfter merging : ";
     for(auto x : li)
    {
        cout<<x<<" ";
    }
}
