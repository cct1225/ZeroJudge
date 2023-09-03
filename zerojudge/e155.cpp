#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>queue;
    vector<int>vector;
    int n;
    while(cin>>n&&n!=0)
    {
        vector.clear();
        while(!queue.empty()) queue.pop();
        for(int i=1;i<=n;i++)
        {
            queue.push(i);
        }
        while(queue.size()!=1)
        {
            vector.push_back(queue.front());
            queue.pop();
            queue.push(queue.front());
            queue.pop();
        }
        cout<<"Discarded cards: ";
        for(int i=0;i<vector.size();i++)
        {
            if(i!=0)    cout<<", ";
            cout<<vector.at(i);
        }
        cout<<endl;
        cout<<"Remaining card: ";
        cout<<queue.front();

    }




}