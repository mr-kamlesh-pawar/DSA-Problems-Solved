class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int fuel = 0, diff = 0, totalDiff = 0, index = 0;
        for (int i = 0; i < gas.size(); i++)
        {
            diff = gas[i] - cost[i];
            totalDiff += diff;
            fuel += diff;

            if (fuel < 0)
            {
                fuel = 0;
                index = i + 1;
            }
        }
        return (totalDiff < 0) ? -1 : index;
    }
};