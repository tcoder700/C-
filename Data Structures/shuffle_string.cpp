
/*Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
Output: "leetcode"
Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.*/


class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string t(s.size(), ' ');
        for (int i{}; i < s.size(); i++)
        {
            t[indices[i]] = s[i];
        }
        return t;
    }
};