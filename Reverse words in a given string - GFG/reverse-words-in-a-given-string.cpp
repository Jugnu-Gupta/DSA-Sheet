//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string str) 
    { 
        stack<string> stk;
        string temp,ans;
        for(int i = 0 ; i < str.size() ; i++){
            if(str[i]=='.'){
                stk.push(temp);
                temp.clear();
            }
            else temp.push_back(str[i]);
        }
        stk.push(temp);
        
        while(!stk.empty()){
            temp=stk.top();
            stk.pop();
            for(int i=0;i<temp.size();i++)
                ans.push_back(temp[i]);
            ans.push_back('.');
        }
        ans.pop_back();
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends