#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"How many pair do you you want to input:";
    cin>>n;
    pair<int,string>p[n];
    int m=n;
    for(int i=0; i<m; i++)
    {
        string s;
        int k;
        cin>>k>>s;
        p[i]= {k,s};
    }
    cout<<"Pairs are : "<<endl;
    for(int i=0; i<m; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    cout<<"\nAfter Swap first and last pair : "<<endl;
    swap(p[0],p[m-1]);
    for(int i=0; i<m; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}
/*
1 Nazmus
2 Sakib
3 Khaled
4 Shanto
5 Abdullah
*/
