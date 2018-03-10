#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <utility>
/// Sorting the vector elements on the basis of first element of pairs in ascending order.
bool com_f_a(const pair<int,int> &a,const pair <int,int> &b)
{
    return (a.first<b.first);
}
/// Sorting the vector elements on the basis of Second element of pairs in ascending order.
bool com_s_a(const pair<int,int> &a,const pair <int,int> &b)
{
    return (a.second<b.second);
}
/// Sorting the vector elements on the basis of first element of pairs in descending order.
bool com_f_d(const pair<int,int> &a,const pair <int,int> &b)
{
    return (a.first>b.first);
}
///Sorting the vector elements on the basis of Second element of pairs in descending order.
bool com_s_d(const pair<int,int> &a,const pair <int,int> &b)
{
    return (a.second>b.second);
}
int main()
{
    vector<pair<int,int > > v;
    int arr1[]={45,30,70,25,75};
    int arr2[]={65,75,15,10,25};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(arr1[i],arr2[i]));
    }
    cout << "The vector before applying sort is:\n" ;
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout << "The vector after applying sort is:\n" ;
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
