//Check Palindrome of Integer number

#include<iostream>
using namespace std;

class Solution{
    public:
    bool checkPalindrome(int num){
        int temp=num;
        int ans=0;
        while(temp>0){
            int rem= temp%10;
            ans=(ans*10)+rem;
            temp=temp/10;

        }
        if(ans==num)
            return true;
        else
            return false;
    }


};

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    Solution sol;
    cout<<sol.checkPalindrome(num);

    return 0;
}