#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count =0;
    string s = to_string(n);
    cout<<s;
        for(int i=0; i <s.length(); i++)
        {
            if(s[i] == 49)
            {
                count++;
            }
        }
        cout<<count<<endl;
}