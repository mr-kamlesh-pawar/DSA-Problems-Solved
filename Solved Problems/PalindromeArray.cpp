#include<iostream>
using namespace std;

class Solution{
    public:
    int palindromearray(int arr[], int n){

        for(int i=0; i<n; i++){
            int temp=arr[i];
            int ans=0;

            while(temp>0){
                int rem= temp%10;
                temp/=10;

                ans= (ans*10)+rem;
            }
            if(ans!=arr[i])
                return 0;
        }

        return 1;
    }


};

int main(){
 int n;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++){
    cout<<"Enter the Number "<<i<<" :";
    cin>>arr[i];
 }
 Solution sol;
 cout<<sol.palindromearray(arr,n);

    return 0;
}