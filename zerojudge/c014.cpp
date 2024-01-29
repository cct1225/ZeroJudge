#include<iostream>
using namespace std;
int main()
{
    int A,B;
    while(cin>>A>>B)
    {
        int cnt=0;
        if(A==0&&B==0)  break;
        int record=0;
        while(A!=0||B!=0)
        {
            int a=A%10;
            int b=B%10;
            if(a+b+record>=10)   
            {
                record=1;
                cnt++; 
            }
            else    record=0;
            A=A/10; 
            B=B/10;
        }
        if(cnt==0)  cout<<"No carry operation."<<endl;
        else if(cnt==1)    cout<<cnt<<" carry operation."<<endl;
        else    cout<<cnt<<" carry operations."<<endl;
    
    }
}
/*#include<iostream>
using namespace std;
int main() {
    int a = 0, b = 0;
    while (cin >> a >> b) {
        int time = 0;
        if (a == 0 && b == 0) {
            return 0;
        }
        int op = 0;
        while (a != 0 || b != 0) {
            
            if ((a % 10 + b % 10+op) >= 10) {
                time +=1;
                op = 1;
            }
            else {
                op = 0;
            }
            a = a / 10;
            b = b / 10;
        }
        if (time > 1) {
            cout << time << " carry operations." << endl;
        }
        else if (time == 0) {
            cout << "No carry operation."<<endl;
        }
        else {
            cout << "1 carry operation." << endl;
        }
    }
}

 */