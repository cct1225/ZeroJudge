#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    vector<string> a;  // Use a vector instead of a fixed-size array
    string str;
    int i = 0;

    while (getline(cin, str)) {
        bool found = false;  // Flag to track whether a repeated line is found

        for (int j = 0; j < i; j++) 
        {
            if (a[j] == str) 
            {
                found = true;
                break;
            }
        }

        if (found) 
        {
            cout << "Yes" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
            a.push_back(str);  // Store the new line in the vector
        }

        i++;
    }
    return 0;
}

/////////////////////////////////////////////////

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,a[501];
    int i=0;
    int count=0;
    while(getline(cin,str))
    {
        a[i]=str;
        for(int j=0;j<i;j++)
        {
            if(a[j]==a[i])  
            {
                cout<<"YES"<<endl;
                break;
            }
            else    
            {
                count++;
            }
        }
        if(count==i)    cout<<"NO"<<endl;
        i++;
    }