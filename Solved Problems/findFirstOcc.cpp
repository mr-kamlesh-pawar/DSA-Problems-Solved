#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    // int strStr(string haystack, string needle) {
    //     for(int i=0;i<haystack.size();i++) {
    //         string temp = haystack.substr(i, needle.size());
    //         if(temp == needle)
    //         { return i;

    //         }
    //     }
    //     return -1;
    // }

    int strStr(string haystack, string needle)
    {
        string temp = "";
        
        for (int i = 0; i < needle.length(); i++)
        {
            if (haystack[i] == needle[0])
            {
               
                    for (int j = 0; j < haystack.length(); j++)
                    {
                        int count = 0;
                        if (haystack[j] == needle[count])
                        {
                            count++;
                            temp += haystack[j];
                        }
                    }
                
                    if (temp == needle)
                    {
                        return i;
                    }
                
            
            }
        }
        return 0;
    }
};

int main()
{
    Solution sol;
    cout << sol.strStr("textbook", "book");

    return 0;
}