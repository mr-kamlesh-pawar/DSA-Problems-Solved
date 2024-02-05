// 20. Valid Parentheses
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false

#include <stack>
#include <iostream>
using namespace std;

class Solution
{
    public :

        stack<char> st;
    bool chekPara(string str)
    {
        int len=str.length();
        if(len==1 || str[0]==')' || str[0]==']' || str[0]=='}'  ){
            return false;}

        

        for(int i=0; i<len; i++){

            if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
                st.push(str[i]);
            }

            else if(!st.empty() && ( (str[i]==')' && st.top()=='(') ||
                                      (str[i]==']' && st.top()=='[') ||
                                      (str[i]=='}' && st.top()=='{') )){
                st.pop();
            }
                else
                    return false;
            
        }
         return st.empty();
    }

} sol;

int main()
{
     string str;
 cout<<"enter Expression: ";
 cin>>str;
 cout<<sol.chekPara(str);
    return 0;
}