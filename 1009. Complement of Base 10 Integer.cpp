class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int mask = 0;
        int temp = n;
        if (n == 0)
        {
            return 1;
        }
        while (temp != 0)
        {
            mask = (mask << 1) | 1;
            temp = temp >> 1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};