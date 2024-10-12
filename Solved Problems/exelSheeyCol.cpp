class Solution {
public:
    int titleToNumber(string columnTitle) {

            int sum=0;
        for(int i=0; i<columnTitle.size(); i++){
            int a= (int) columnTitle[i]- 'A'+1;
            sum= sum*26+a;

        }
        return sum;
    }
};