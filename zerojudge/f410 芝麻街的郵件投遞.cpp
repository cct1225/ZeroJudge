#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[1001];
    vector<int> vec1,vec2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)   vec1.push_back(a[i]);
        else vec2.push_back(a[i]);
    }
    sort(vec1.begin(),vec1.end());
    reverse(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());
    for (int num : vec2) 
    {
        cout << num << " ";
    }
    for (int num : vec1) 
    {
        cout << num << " ";
    }
}