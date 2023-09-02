#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main() {
    string s;
    stringstream ss;
    
    int  count;
    double number;
    while(getline(cin,s))
    {
        ss.clear();
        ss.str(s);
        double odd_sum = 0, eve_sum = 0;
        while (ss >> count) 
        {
            char delimiter;
            ss >> delimiter;  // Read the delimiter (colon) as a char
            ss >> number;
            if (count % 2 == 0) {
                eve_sum += number;
            } 
            else 
            {
                odd_sum += number;
            }
            
        }
        cout << odd_sum-eve_sum<<endl; 
   
}

}