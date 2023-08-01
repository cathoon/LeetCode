class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool isNewWord = true;
        for(const auto& c : s)
        {
            if(' ' != c)
            {
                if(true == isNewWord)
                {
                    isNewWord = false;
                    count = 1;

                    continue;
                }

                count++;
            }
            else
            {
                isNewWord = true;
            }
        }

        return count;
    }
};