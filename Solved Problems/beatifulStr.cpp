class Solution
{
public:
    int beautifulSubstrings(string s, int k)
    {
        int stcount = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int countVow = 0;
            int countCoso = 0;

            for (int j = i; j < s.size(); j++)
            {

                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                {
                    countVow += 1;
                }
                else
                {
                    countCoso += 1;
                }

                if (countVow == countCoso && ((countVow * countCoso) % k == 0))
                {
                    stcount += 1;
                }
            }
        }
        return stcount;
    }
};