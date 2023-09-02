/*#include<iostream>
#include<stack>

using namespace std;
int record=0;

void palinrome(string str){
    
    stack<char>myStack;
    int j;

    for(int i = 0; i < str.length()/2; i++)
    {
        myStack.push(str[i]);//na
    }


    while(!myStack.empty())
    {
        cout<<myStack.top();
        myStack.pop();
    }

    for(int j=(str.length())/2+1;j<str.length();j++)
    {
        if(myStack.top()==str[(str.length())/2+1])  
        {
            record=1;
            myStack.pop();
        }
        else    break;
    }
}
int main(){
    string str;
    cin>>str;
    palinrome(str);
    if(record==1)   cout<<"YES";
    else    cout<<"NO";
    return 0;
    
    }

*/
#include<string>
#include<iostream>
#include<stack>
using namespace std;
void palinrome(string str){
    stack<char> mystack;
    
    for(int i = 0; i < str.length( )/2; i++){
        mystack.push(str[i]);
        
        if(mystack.top() != str[str.length()-(i+1)]){
        	cout<<"This string isn't a palindrome! "<<endl;
        	return;
		}	
    }
	cout<<"This string is a palindrome! "<<endl;
	
    return;
}
int main(){
	string str;
	cin>>str;
	palinrome(str);
	return 0;
}