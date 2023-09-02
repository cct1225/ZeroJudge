#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int number;
    string a[12]={"豬","鼠","牛","虎","兔","龍","蛇","馬","羊","猴","雞","狗"};
    while(cin>>number){
        if(number>0)    cout<<a[number%12]<<endl;
        else {
            number+=121;
            cout<<a[number%12]<<endl;
        }
    }
}