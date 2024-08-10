#include <bits/stdc++.h>
using namespace std;

class Sol
{

public:
    string sortSentence(string s)
    {
        vector<string> str(10);
        string word = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 48 && s[i] <= 57)
            {
                str[s[i] - 48] = word + " ";
                word = "";
                i++;
            }
            else
            {
                word += s[i];
            }
        }
        string ss = "";
        for (auto ch : str)
        {
            ss += ch;
        }
        ss.pop_back();

        return ss;
    }
};

int main()
{

    string s1 = "is2 sentence4 This1 a3";
    string s2 = "Myself2 Me1 I4 and3";
    Sol sol;
    cout << sol.sortSentence(s1) << endl;
    cout << sol.sortSentence(s2) << endl;

    return 0;
}
