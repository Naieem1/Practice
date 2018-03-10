#include <iostream>
using namespace std;
#include <map>
#include <iterator>
int main()
{
    map <string,int> m;
    map <string,int>::iterator it;
    string arr1[]={"naieem","al","zaman"};
    int arr2[]={1,2,3};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<n;i++)
    {
        //m[arr1[i]]=arr2[i]; ///map_name[type]=data
        m.insert(make_pair(arr1[i],arr2[i]));
    }
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;

}
