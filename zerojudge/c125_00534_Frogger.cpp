#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;
vector <pair<int, int> >v;
int G[205][205];
int count = 0;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)    break;
        count++;
        v.clear();
        pair<int,int>p;
        for(int i=0;i<n;i++)
        {
            cin>>p.first>>p.second;
            v.push_back(p);
        }
        int cnt=0;
        int temp;
        for (int i = 0; i < n-1; i++){
            for (int j = i; j < n; j++){
                temp = pow(v[i].first-v[j].first, 2) + pow(v[i].second-v[j].second, 2);
                G[i][j] = temp;
                G[j][i] = temp;
            }
        }

        for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        for (int k = 0; k < n; k++){
            G[j][k] = min(G[j][k], max(G[j][i], G[i][k]));
        }
    }
}
        float ans=sqrt(G[0][1]);
        cout<<"Scenario #"<<count<<" "<<endl;
        cout<<"Frog Distance = "<<fixed<<setprecision(3)<<ans;
        cout<<endl;
        cout<<endl;
    }
}