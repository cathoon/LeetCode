class Solution {
public:
    int longestPalindrome(string s) {
        int arr[123] = {0, };
        bool isOddNumber = false;
        int answer = 0;
        for(int i = 0; i < s.length(); ++i)
        {
            arr[s[i]]++;
        }

        for(int i = 0 ; i < 123; ++i)
        {
            if(arr[i] > 0)
            {
                if(arr[i] % 2 == 1)
                {
                    isOddNumber = true;
                    answer += arr[i] - 1;
                }
                else
                    answer += arr[i];
            }
        }
        
        if(true == isOddNumber)
            answer++;

        return answer;
    }
};