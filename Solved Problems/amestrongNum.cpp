#include<bits/stdc++.h>
using namespace std;

class Sol{
    public:
    bool AmStrong(int n){
        int num= n;
        int ans=0;
        while(n!=0){
            int dig= n%10;
            n= n/10;
            ans= ans+ (dig*dig*dig);

        }
        if(ans == num) return "true";
        if(ans != num) return "false";
    }
};

int main(){
    Sol s;
    int n1= 370;
    int n2= 34343;
    cout<<n1<<" is :-> "<<s.AmStrong(n1);
    cout<<n2<< " is :->  "<<s.AmStrong(n2);
    return 0;
}