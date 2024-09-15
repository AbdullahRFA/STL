#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int n;
    cout<<"Enter how many element do you want to insert: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;///in map keys sort autometically in assending order.
        mp[i]=k;
    }
cout<<"First map : ";
    for(int i=1;i<=mp.size();i++)
    {
        cout<<mp.at(i)<<" " ;
    }

cout<<"\nEnter the deleting position : ";
int de;
cin>>de;
mp.erase(de);///for deleting key
cout<<"\nAfter deleting : \n";
 for(auto x : mp)
    {
        cout<<x.second<<" ";
    }
    cout<<"\nEnter the finding value : ";
    int fi;
    cin>>fi;///for key finding.....
    int f=mp.count(fi);
    if(f)
    {///////////////////////find() works in the same way
        cout<<"\nFound";
    }
    else
    {
        cout<<"\nNot found";
    }
map<int,int>m;
 int x;
    cout<<"\nEnter how many element do you want to insert: ";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        int k;
        cin>>k;///in map keys sort autometically in assending order.
        m[i]=k;
    }
cout<<"\nSecond map : ";
for(auto x: m)cout<<x.second<<" ";
    m.swap(mp);
    cout<<"\nAfter swapping First map is : ";
    for(auto x:m)
    {
        cout<<x.second<<" ";
    }
  cout<<"\nSize of the map is : ";
    cout<<mp.size()<<endl;
 cout<<"\nMAX_Size of the map is : ";
    cout<<mp.max_size()<<endl;
    if(mp.empty())
    {
        cout<<"\nMap is empty";
    }
    else
    {
        cout<<"\nMap is not empty";
    }
    mp.clear();
    cout<<"\nAfter clear : ";
    if(mp.empty())
    {
        cout<<"\nMap is empty";
    }
    else
        cout<<"\nMap is not empty";

    return 0;
}
