#include <bits/stdc++.h>
using namespace std;

class Sol
{
public:
    int countSeniors(vector<string> &details)
    {
        int count = 0;
        for (auto str : details)
        {
            string s = str.substr(11, 2);
            int ss = stoi(s);

            count += (60 < ss) ? 1 : 0;
        }

        return count;
    }
};

int main()
{
    vector<string> details = {"7868190130M7522", "5303914400F9211", "9273338290F4010"};
    Sol s;
    cout << s.countSeniors(details);

    return 0;
}