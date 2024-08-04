
class Solution
{
public:
    string defangIPaddr(string address)
    {
        string str = "";
        for (char ch : address)
        {
            if (ch == '.')
                str += "[.]";
            else
                str += ch;
        }
        return str;
    }
};