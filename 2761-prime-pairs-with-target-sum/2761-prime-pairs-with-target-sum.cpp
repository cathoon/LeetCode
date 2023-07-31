class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> answer;
        bool primeNumber[1000001] ={true, false, };
        set<int> primeSet;
        for(int i=2;i <= n; ++i)
        {
            if (true == primeNumber[i])
                continue;

            primeSet.insert(i);
            for(int j = i + i; j < n; j += i)
                primeNumber[j] = true;
        }

        for(auto it : primeSet)
        {
            int temp = n - it;
            if (true == primeNumber[temp])
                continue;

            primeNumber[it] = true;
            if (1 == primeSet.count(temp))
            {
                answer.push_back({it, temp});
            }
        }

        return answer;
    }
};