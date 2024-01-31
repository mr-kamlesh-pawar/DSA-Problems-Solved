#include<iostream>
#include<vector>
using namespace std;

class Soluation{
    public:
    vector<int> res;
    vector<int> Sum1(int arr[], int n){
        for(int i=0; i<n; i++){
            if(arr[i]==(i+1)){
                res.push_back(i+1);
            }
        }
        return res;

   }
};

int main(){

    int n;

    cout<<"Enter how many no:-";
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
       cin>> arr[i]; 
    }
    Soluation S;
    vector<int> result=S.Sum1(arr, n);
    for(int i=0; i<result.size(); i++){
        cout<<result[i], " ";
    
    }
    return 0;
}