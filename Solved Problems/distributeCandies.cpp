class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n= candyType.size()/2;
        unordered_set<int> candies(candyType.begin(), candyType.end());

        return min((int) candies.size(), n);

    }
    
};