class Solution {
public:
    int romanToInt(string s) {
        map<char,int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int sum = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if(i + 1 < s.length() && roman[s[i + 1]] > roman[s[i]])
                sum -= roman[s[i]];
            else
                sum += roman[s[i]];
        }

        return sum;
    }
};