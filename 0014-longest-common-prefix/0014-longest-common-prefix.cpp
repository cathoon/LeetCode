class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";

        int minLength = 202;
        for(int i = 0; i < strs.size(); ++i)
            minLength = strs[i].length() > minLength ? minLength : strs[i].length();

        for(int i = 0; i < minLength; ++i)
        {
            char temp = ' ';
            for(int j = 0; j < strs.size(); ++j)
            {
                if(' ' == temp)
                {
                    temp = strs[j][i];
                    continue;
                }

                if(strs[j][i] != temp)
                    return answer;
            }
            answer += temp;
        }

        return answer;
    }
};