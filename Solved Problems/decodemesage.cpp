class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        string str = "";

        set<char> seen;
        vector<char> mykey;

        for (char ch : key)
        {
            if (ch != ' ' && seen.find(ch) == seen.end())
            {
                mykey.push_back(ch);
                seen.insert(ch);
            }
        }

        map<char, char> mapp;
        char letter = 'a';

        for (auto chh : mykey)
        {
            mapp[chh] = letter;
            ++letter;
        }

        for (int i = 0; i < message.size(); i++)
        {
            char sss = message[i];
            if (sss == ' ')
                str += " ";
            else
            {
                str += mapp[sss];
            }
        }
        return str;
    }
};