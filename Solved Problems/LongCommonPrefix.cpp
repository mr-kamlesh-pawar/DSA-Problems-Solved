#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> res;
    string commonstr(string str1, string str2)
    {   res.clear();
        int n = min(str1.length(), str2.length());
        for (int i = 0; i < n; i++)
        {
            if (str1[i] == str2[i])
            {
                res.push_back(string(1, str1[i]));
            }
            else
                break;
        }
        string result;
        for (const string &s : res)
        {
            result += s;
        }
        return result;
    }

    string longCommonPre(vector<string> &strs)
    {
        if (strs.empty())
            return "";
        string st = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            st = commonstr(st, strs[i]);
        }
        return st;
    }

} sol;

int main()
{

    vector<string> strs = {"flower", "flow", "flight"};
    cout << sol.longCommonPre(strs);

    return 0;
}
