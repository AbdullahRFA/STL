#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"How many number do you want to input for the first vector?\nAns : ";
    cin>>n;
    cout<<"Enter element one by one : ";
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
    }

    cout<<"\nFront element of the vector is "<<v.front()<<endl;
    cout<<"\nBack element of the vector is "<<v.back()<<endl;
    cout<<"\nSize of the vector : "<<v.size()<<endl;//to see the capacity or size of the vector

    v.pop_back();//delete last element
    cout<<"\nAfter doing pop back ";
    for (int  x : v)
    {
        cout<<x<<" ";
    }
    cout<<"\nAfter erase an element of first index : ";
    v.erase(v.begin()+0);//deleting any value in a vector
//    //v.erase(v.begin()+1,v.end());//deleting elements within the range in a vector.
    for(int x : v)
    {
        cout<<x<<" ";
    }
    cout<<"\nAfter inserting 9 at idex 2: ";
    v.insert(v.begin()+2,9);//inserting value at any point.
     for(int x : v)
    {
        cout<<x<<" ";
    }
    cout<<"\nAfter inserting 3 at idex 1 three times : ";
    v.insert(v.begin()+1,3,0);//inserting value at any point any times
    for(int x : v)
    {
        cout<<x<<" ";
    }

    cout<<"\n\n before sorting First Vector elements are : ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end());
    cout<<"\n\nAfter sorting the vector elements are : ";
    for(int x : v)
    {
        cout<<x<<" ";
    }
    vector<int>v1;
    int m;
    cout<<"\nHow many number do you want to input for the Second vector?\nAns : ";
    cin>>m;
    cout<<"\nEnter element one by one : ";
    for(int i=0; i<m; i++)
    {
        int k;
        cin>>k;
        v1.push_back(k);
    }
    cout<<"\nSecond vector elements are : ";
    for(int x : v1)
    {
        cout<<x<<" ";
    }
    swap(v,v1);
    cout<<"\nAfter swapping : "<<endl;
    cout<<"\nFirst Vector elements are : ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n\nSecond vector elements are : ";
    for(int x : v1)
    {
        cout<<x<<" ";
    }
    reverse(v.begin(),v.end());
    cout<<"\n\nAfter reversing the first vector elements are : ";
    for(int x : v)
    {
        cout<<x<<" ";
    }
    vector<int >:: iterator it;
    cout<<"\nDisplaying the first vector using iterator : ";
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    v.clear();//to clear all the element of the vectoe
    cout<<"\nAfter clear the vector, Size of the vector : "<<v.size()<<endl;
    if(v.empty())//is vector empty?
    {
        cout<<"Vector Empty"<<endl;
    }
    else
        cout<<"Vector is not  Empty"<<endl;
}
