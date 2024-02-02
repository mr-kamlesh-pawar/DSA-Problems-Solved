#include <iostream>
#include <vector>
using namespace std;
class Sol
{
public:
    int maxArea(vector<int> &height)
    {
        int left=0;
        int right=height.size()-1;
        int max1=0;

        while(left<right){
            int len= right-left;
            int min1=min(height[left],height[right]);

            max1=max(min1*len, max1);

            if(height[right]<height[left])
            {
                right--;
            }else{
                left++;
            }
        }



return max1;
    }
};

int main()
{
    vector<int> height={6,3,2,5,4,7,3,5,5,3};
    Sol s;
    cout<<s.maxArea(height);
    return 0;
}
