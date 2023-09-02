#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
string s,greeting,name;
stringstream ss;
int  i;
getline(cin, s); // 讀取換行
getline(cin,greeting);
ss.clear();
ss.str(s);
while (1)
{
    ss >> name;
    if ( ss.fail() ) 
    {
        break;
    }
    cout << greeting<<"," <<name<< endl;
}
    

}