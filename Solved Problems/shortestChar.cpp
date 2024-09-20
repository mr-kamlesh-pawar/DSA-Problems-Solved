class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
          int n = s.size(); 
        const int INF = 1 << 30; 
        vector<int> distances(n, INF); 
      
  
        for (int i = 0, prevCPosition = -INF; i < n; ++i) {
            if (s[i] == c) {
                prevCPosition = i; 
            }
        
            distances[i] = min(distances[i], i - prevCPosition);
        }
      
     
        for (int i = n - 1, nextCPosition = INF; i >= 0; --i) {
            if (s[i] == c) {
                nextCPosition = i; 
            }
          
            distances[i] = min(distances[i], nextCPosition - i);
        }
      
        return distances;
        
    }
};